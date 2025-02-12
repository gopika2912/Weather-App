# Arduino Sensor Monitor 🌡️💧🚨

This is an **Arduino-based environmental monitoring system** that displays **temperature, humidity, gas levels, and rain detection** on an **LCD screen** while also transmitting data via Serial Communication.

## 📷 Hardware Setup
![image](https://github.com/user-attachments/assets/b79b2f03-8a67-4d51-8e6d-69db7e648865)


### 📜 Features
- 📊 **Measures Temperature & Humidity** using **DHT11**
- 🔥 **Monitors Air Quality** with **MQ Sensor**
- ☔ **Detects Rain Intensity**
- 🖥 **Displays Data on 16x2 LCD**
- 🖧 **Sends Data to Serial Monitor**

## 🔧 Components Used
| Component       | Description |
|----------------|------------|
| Arduino Board  | Any compatible board (Uno, Mega, etc.) |
| DHT11 Sensor  | Temperature & Humidity Sensor |
| MQ Gas Sensor | Detects air quality changes |
| Rain Sensor   | Detects rain levels |
| 16x2 LCD Display | Outputs the sensor readings |
| Potentiometer | Adjusts LCD brightness |

## 🛠️ Circuit Diagram
Refer to the **hardware setup image** (`hardware.jpg`) for wiring instructions.

## 🚀 How to Use
1. **Upload** `sensor_monitor.ino` to an Arduino board.
2. **Connect** the sensors as per the circuit diagram.
3. **View readings** on the LCD or open the Serial Monitor.
4. **Analyze data** logged to Serial Monitor.

## 📜 License
This project is **open-source** under the MIT License. Feel free to modify and improve it! 🎉
