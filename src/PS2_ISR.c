#include "globals.h"

extern volatile unsigned char byte1, byte2, byte3;
unsigned char byte1_fix, byte2_fix, byte3_fix;

/***************************************************************************************
 * Pushbutton - Interrupt Service Routine                                
 *                                                                          
 * This routine checks which KEY has been pressed. If it is KEY1 or KEY2, it writes this 
 * value to the global variable key_pressed. If it is KEY3 then it loads the SW switch 
 * values and stores in the variable pattern
****************************************************************************************/

int counter = 0;
int packet_goat = 0;
void PS2_ISR(struct alt_up_dev *up_dev, unsigned int id)
{
	unsigned char PS2_data;

	/* check for PS/2 data--display on HEX displays */
	if (alt_up_ps2_read_data_byte (up_dev->PS2_dev, &PS2_data) == 0)
	{
		byte1 = byte2;
		byte2 = byte3;
		byte3 = PS2_data;

		counter++;
		if (counter == 3) {
			packet_goat = 1;
			byte1_fix = byte1;
			byte2_fix = byte2;
			byte3_fix = byte3;
			counter = 0;
		} else {
			packet_goat = 0;
		}

		if ( (byte2 == (unsigned char) 0xAA) && (byte3 == (unsigned char) 0x00) ){
			counter = -1;
			(void) alt_up_ps2_write_data_byte (up_dev->PS2_dev, (unsigned char) 0xF4);
		}
	}
	return;
}
