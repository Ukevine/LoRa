# LoRa Chat with RH_RF95 on Arduino (USB-Only)

This is a simple **LoRa serial chat application** using an Arduino board and an RH_RF95 LoRa module. It allows you to send and receive messages between devices using the LoRa network. Communication is handled entirely through the serial monitor via USB — **no jumper wires required**.

---

## 📡 Features

- Bi-directional text chat over LoRa
- Serial monitor interface for input/output
- Configurable frequency and power level
- Lightweight and minimal code

---

## 🛠️ Hardware Required

- Arduino Uno / Nano / compatible board  
- LoRa module (e.g., RFM95) pre-connected to the board  
- USB cable for uploading code and serial communication

> ⚠️ **No jumper wires are used.** This project assumes your LoRa module is already connected or embedded in the board circuitry.

---

## ⚙️ software setup

### 1. Install Arduino IDE

Download and install the [Arduino IDE](https://www.arduino.cc/en/software).

### 2. Install Required Library

Install the **RadioHead** library:

- Go to `Sketch` → `Include Library` → `Manage Libraries`
- Search for `RadioHead`
- Install it (by Mike McCauley)

### 3. Upload the Code

- Open `LoRa.ino` in Arduino IDE
- Select your board under `Tools → Board`
- Select the correct COM port
- Click **Upload**

---

## 🖥️ Using the Serial Chat

1. After uploading, open the Serial Monitor (Ctrl + Shift + M)
2. Set **baud rate to 115200**
3. Type a message and hit Enter — it will be sent via LoRa
4. If another device is running the same sketch, it will receive and print the message
5. Messages received will appear prefixed by:
