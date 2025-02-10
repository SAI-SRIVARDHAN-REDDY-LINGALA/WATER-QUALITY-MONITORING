# WATER-QUALITY-MONITORING
SMART WATER QUALITY MONITORING SYSTEM USING ARDUINO &amp; SENSORS


# 🌊💧 **Smart Water Quality Monitoring System** 💧🌊  

📌 **Team Members:**  
- **Sai Sri Vardhan Reddy Lingala** (23EC10038)  
- **Veera Venkata Sai Srinivas Payyavula** (23EC10058)  
- **Nithish Kumar Banoth** (23EC10018)  
- **Sounak Saha** (23EC10078)  

📌 **Group ID:** 9  
📌 **Section:** 8  

---  

## 🚀 **Project Overview**  
This **Smart Water Quality Monitoring System** is an Arduino-based solution designed to measure and display water temperature and **Total Dissolved Solids (TDS)** in real-time. The system helps monitor water quality using **DS18B20** and **Grove TDS sensors**, providing instant readings on an **LCD 16x2 display**.  

---  

## 🎯 **Motivation**  
Ensuring safe and clean water is crucial for health and environmental sustainability. This project leverages technology to monitor water quality, detect contamination, and help in **pollution prevention.**  

---  

## 🔧 **Hardware Components**  
- **Arduino Uno** (Microcontroller)  
- **DS18B20** (Digital Temperature Sensor)  
- **Grove TDS Sensor** (Total Dissolved Solids Measurement)  
- **LCD 16x2** (With I2C for real-time display)  
- **Breadboard & Jumper Wires** (For Circuit Connections)  
- **Power Supply** (USB/Battery)  

---  

## 🛠 **Software & Libraries**  
- **Arduino IDE** (Programming & Uploading Code)  
- **Libraries Required:**  
  - `OneWire.h` & `DallasTemperature.h` (For DS18B20 Sensor)  
  - `LiquidCrystal_I2C.h` (For LCD with I2C Communication)  

---  

## ⚙️ **System Working**  
1️⃣ **DS18B20 Sensor** → Measures water temperature and sends digital data to Arduino.  
2️⃣ **Grove TDS Sensor** → Measures water TDS levels and outputs an analog signal.  
3️⃣ **Arduino Processing** → Converts sensor data into readable values.  
4️⃣ **LCD Display** → Shows real-time **Temperature (°C) & TDS (ppm)** readings.  

---  

## 📝 **Installation & Setup**  
### 1️⃣ **Clone Repository**  
```sh
git clone https://github.com/your-repo-url.git
cd smart-water-quality-monitoring
```
### 2️⃣ **Install Required Libraries**  
- Open **Arduino IDE**  
- Go to **Library Manager** (`Sketch → Include Library → Manage Libraries`)  
- Search and install:  
  - **OneWire**  
  - **DallasTemperature**  
  - **LiquidCrystal_I2C**  

### 3️⃣ **Upload Code to Arduino**  
- Connect Arduino via **USB**  
- Select **Board: Arduino Uno** & Correct **COM Port**  
- Open **`water_quality_monitoring.ino`**  
- Click **Upload** 🚀  

---  

## 📊 **Results & Observations**  
✅ **Real-time monitoring of temperature & TDS**  
✅ **Accurate and stable sensor readings**  
✅ **Easy-to-read LCD display output**  
✅ **Can be extended for IoT & cloud-based tracking**  

---  

## 🚧 **Challenges Faced**  
🔹 Sensor calibration for accurate readings  
🔹 Electrical noise affecting analog measurements  
🔹 Environmental conditions impacting sensor performance  

---  

## 🎓 **Learnings**  
🔸 Understanding **sensor calibration** techniques  
🔸 Implementing **I2C communication** for LCD  
🔸 Developing an **efficient data acquisition system**  

---  

## 📚 **References**  
📺 **YouTube** - [How to Electronics, Miliohm](https://www.youtube.com)  
📖 **Arduino Tutorials** - [Arduino Get Started](https://arduinogetstarted.com)  
📂 **GitHub Libraries** - [LiquidCrystal_I2C](https://github.com/lucasmaziero/LiquidCrystal_I2C)  

---  

## 🏆 **Future Enhancements**  
🚀 **Add IoT Connectivity** - Upload data to a cloud platform for remote monitoring  
📲 **Mobile App Integration** - Display real-time data on a mobile app  
⚡ **Water Quality Alerts** - Set threshold-based notifications  

---

## 📜 **License**  
This project is **Open Source** and available under the **MIT License**.  

---

🔹 **Developed by Group 9, Section 8**  
🔹 **IIT Kharagpur, EECE Department**  
🔹 **Stay Hydrated, Stay Safe!** 💧🚀
