# LoRa Chat with RH_RF95 on Arduino (USB-Only)

A simple, minimal **LoRa serial chat application** for Arduino boards using the RH_RF95 LoRa module. This project enables two-way text communication over LoRa, controlled entirely through the Arduino IDE’s serial monitor—**no jumper wires required**.

This is a **team project**, originally **forked from [Ukevine/LoRa](https://github.com/Ukevine/LoRa)** and adapted for our specific use case with USB-only serial monitoring.

---

## 📡 Features

- Full-duplex text chat over LoRa
- Easy-to-use serial monitor interface
- Configurable frequency and transmission power
- Clean, minimal code for learning or prototyping

---

## 🛠️ Hardware Requirements

- Arduino Uno, Nano, or compatible board
- LoRa module (e.g., RFM95) **pre-wired or embedded** on the board
- USB cable for uploading code and serial communication

> ⚠️ **Important:** This project assumes the LoRa module is already connected to the board (no additional jumper wires are needed).

---

## ⚙️ Software Setup

### 1️⃣ Install the Arduino IDE

- Download and install the latest version from the [official Arduino website](https://www.arduino.cc/en/software).

### 2️⃣ Install Required Libraries

- Open Arduino IDE.
- Go to **Sketch** → **Include Library** → **Manage Libraries**.
- Search for **RadioHead** (by Mike McCauley) and install it.

### 3️⃣ Upload the Code

- Open the `LoRa.ino` sketch in the Arduino IDE.
- Select the appropriate board under **Tools** → **Board**.
- Choose the correct **Port**.
- Click **Upload** to flash the code.

---

## 🖥️ How to Use the Serial Chat

1. After uploading, open the **Serial Monitor** (Ctrl + Shift + M).
2. Set the **baud rate** to **115200**.
3. Type your message and press **Enter** to send it via LoRa.
4. A paired device running the same sketch will receive and display the message.
5. Incoming messages will appear in the monitor, clearly prefixed for easy reading.

---

## 📝 Notes

- This example is intended for demonstration and learning. For production use, consider adding error handling, encryption, or support for addressing multiple nodes.
- Ensure that all LoRa modules are set to the same frequency and parameters to enable successful communication.

---

## 🤝 Contributing

Contributions are welcome! Feel free to open issues or submit pull requests to improve functionality, documentation, or compatibility.

---

