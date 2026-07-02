# 🌱 IoT-Based Smart Irrigation System for Precision Agriculture

## 📌 Overview

The **IoT-Based Smart Irrigation System** is a mini project that automates irrigation using a soil moisture sensor and an Arduino Uno. The system continuously monitors soil moisture and automatically switches a water pump (simulated using a DC motor in Tinkercad) ON or OFF based on the moisture level.

This project demonstrates the fundamentals of the **Internet of Things (IoT)**, embedded systems, and smart agriculture by helping reduce water wastage and improving irrigation efficiency.

---

## 🎯 Objectives

* Monitor soil moisture in real time.
* Automate irrigation based on soil conditions.
* Reduce water consumption.
* Minimize manual intervention.
* Demonstrate a simple IoT-based smart farming solution.

---

## 🛠️ Components Used

| Component                        | Quantity    |
| -------------------------------- | ----------- |
| Arduino Uno                      | 1           |
| Soil Moisture Sensor             | 1           |
| DC Motor (Water Pump Simulation) | 1           |
| 2N2222 NPN Transistor            | 1           |
| 220Ω Resistor                    | 1           |
| Jumper Wires                     | As required |

---

## ⚙️ Working Principle

1. The soil moisture sensor continuously measures the moisture level of the soil.
2. Arduino reads the analog value from the sensor.
3. The sensor value is compared with a predefined threshold.
4. If the soil is dry, Arduino turns the water pump ON.
5. When the soil becomes sufficiently moist, Arduino turns the pump OFF.
6. The current soil moisture value and pump status are displayed in the Serial Monitor.

---

## 🔌 Circuit Connections

### Soil Moisture Sensor

| Sensor Pin | Arduino Pin |
| ---------- | ----------- |
| VCC        | 5V          |
| GND        | GND         |
| SIG        | A0          |

### DC Motor (Water Pump)

| Component            | Connection                      |
| -------------------- | ------------------------------- |
| Arduino D7           | 220Ω Resistor → Transistor Base |
| Transistor Emitter   | GND                             |
| Transistor Collector | Motor Negative                  |
| Motor Positive       | 5V                              |

---

## 🏗️ System Architecture

```text
Soil Moisture Sensor
          |
          v
      Arduino Uno
          |
          v
     DC Motor (Pump)
          |
          v
      Irrigation
```

---

## 📂 Project Structure

```text
Smart-Irrigation-System/
│
├── Arduino_Code/
│   └── smart_irrigation.ino
│
├── Circuit/
│   ├── tinkercad_circuit.png
│   └── circuit_diagram.png
│
├── Images/
│   └── project_demo.png
│
└── README.md
```

---

## 💻 Arduino Logic

* Read the soil moisture sensor value.
* Compare it with the threshold value.
* If the soil is dry:

  * Turn the pump ON.
* Otherwise:

  * Turn the pump OFF.
* Repeat every second.

---

## 🚀 Features

* Automatic irrigation
* Real-time soil monitoring
* Water conservation
* Low-cost implementation
* Easy to simulate in Tinkercad
* Beginner-friendly Arduino project

---

## 🌾 Applications

* Smart Agriculture
* Home Gardens
* Greenhouses
* Precision Farming
* Educational IoT Projects

---

## 🔮 Future Enhancements

* Integrate ESP8266 or ESP32 for cloud connectivity.
* Add a mobile application for remote monitoring.
* Include weather forecasting for smarter irrigation.
* Send SMS or email alerts.
* Power the system using solar energy.

---

## 📸 Simulation

The project can be simulated using **Tinkercad Circuits** with the Arduino Uno, Soil Moisture Sensor, and DC Motor.

---

## 🧠 Skills Demonstrated

* Arduino Programming
* Embedded Systems
* Sensor Interfacing
* Actuator Control
* IoT Fundamentals
* Circuit Design
* Tinkercad Simulation
* Smart Agriculture Concepts

---

## 🏷️ Technologies Used

* Arduino IDE
* C/C++
* Tinkercad
* Internet of Things (IoT)
* Embedded Systems

---

## 📈 Outcome

The prototype successfully demonstrates automatic irrigation based on soil moisture. By supplying water only when required, the system helps conserve water, reduces manual effort, and promotes sustainable farming practices.

---

## 📄 License

This project is intended for educational and learning purposes. Feel free to modify and improve it for your own academic or personal projects.
