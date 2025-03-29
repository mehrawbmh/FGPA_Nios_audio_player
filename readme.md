# 🚀 FPGA Monitor Graphics with Altera DE2

## 🖥️ Overview

This project showcases **FPGA-based graphics generation and media interfacing** using the **Altera DE2 board** and the **Nios II processor** in Quartus. It integrates **VGA graphics rendering**, **audio processing**, **PS/2 mouse handling**, and **LCD display control** for an interactive multimedia experience.

## 🎯 Features

- 🖼️ **VGA Graphics Rendering:** Displays a **blue box with text** and moves the word **"ALTERA"** around the screen.
- 🖱️ **Mouse Input Handling:** Tracks and responds to **PS/2 mouse movements and clicks**.
- 🎵 **Audio Processing:** Records and plays back **audio**, with an optional **echo effect**.
- 📟 **LCD Display Control:** Displays and **scrolls text messages** on a **16x2 character LCD**.
- 🔘 **Pushbutton Interaction:** Uses board **buttons to trigger audio recording and playback**.
- ⏳ **Interrupt-driven Processing:** Implements **ISRs (Interrupt Service Routines)** for **precise timing and event handling**.

## 🛠️ Hardware Requirements

- ⚡ **Altera DE2 FPGA board**
- 🏗️ **Nios II soft processor**
- 🖥️ **VGA display**
- 🖱️ **PS/2 mouse**
- 🎤🔊 **Audio input/output**
- 🏗️ **Quartus development environment**

## 💻 Software Components

- ⏲️ **Interrupt Service Routines (ISRs):** Handle **PS/2 input, pushbutton presses, audio playback, and timer events**.
- 🎨 **Graphics Rendering:** Uses **pixel buffer DMA** for efficient VGA updates.
- 🎙️ **Audio Buffering:** Manages **real-time audio recording and playback**.
- 🖱️ **Mouse Control:** Processes **mouse movement and button clicks**.

## ⚙️ Setup & Compilation

1. 🏗️ **Open** the project in **Quartus Prime**.
2. 🔄 **Compile** the project and **program the FPGA**.
3. 🔌 **Connect** the required peripherals (**VGA monitor, PS/2 mouse, audio input/output**).
4. ▶️ **Run** the software on the **Nios II processor**.

## 🎮 Usage

- 🎤 Press **record button** to **start recording audiodio**.
- 🔊 Press **playback button** to **play back recorded audio**.
- 🖱️ **Move the mouse** to interact with **on-screen buttons**.
- 👀 **Observe VGA, LCD, and HEX displays** for real-time updates.

## 🚀 Future Enhancements

- 🎛️ Implement **additional GUI elements** for better interaction.
- 🎚️ Extend **audio processing with real-time effects**.
- ⌨️ Add **keyboard support via the PS/2 interface**.

## 📜 License

This project is **licensed under the MIT License**. Feel free to use, modify, and share! ✨


