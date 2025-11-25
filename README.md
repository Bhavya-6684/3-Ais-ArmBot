# 3-Ais-ArmBot
This project is a beginner-friendly yet functional 3-Axis Robotic Armbot designed and built using basic electronic components such as the Arduino Uno, three SG90 servo motors, breadboard. The main goal behind this project was to understand the fundamentals of servo motor control, inverse kinematics and how 3-axis robotic systems work in real life.

3-Axis Armbot 🤖

A simple 3-axis robotic arm built using Arduino Uno, SG90 servo motors, breadboard, jumper wires, and programmed using C++.
The project also includes a web-based controller made with HTML, CSS, and JavaScript to control the servo angles in real time.

🛠️ Tech Stack
Hardware

Arduino Uno

3× SG90 Servo Motors

Breadboard

Jumper Wires

Software

Arduino IDE (C++ for servo control)

HTML

CSS

JavaScript

📌 Features

3-axis robotic arm movement

Smooth servo motor control

Web interface with sliders for angle control

Real-time communication between Arduino and web app

🚀 How It Works

Servos are connected to Arduino via PWM pins.

Arduino receives angle values sent from the web interface.

The C++ code updates servo positions smoothly.

🔌 Hardware Connections
Servo Motor	Arduino Pin
Base Servo	D9
Arm Servo 1	D10
Arm Servo 2	D11

All servo VCC → 5V

All GND → GND

📁 Project Structure
/armbot/
│── arduino_code/        → C++ code for controlling servos
│── web_app/             → HTML, CSS & JS files for control panel
│── wiring_diagram/      → Circuit connections (optional)
│── README.md

💻 Arduino Code

C++ code controls the servo angles received from the web app.

🌐 Web Controller

HTML, CSS & JavaScript create a real-time control panel with sliding inputs to adjust servo angles.

✅ 1. Power Connections (Common for All Servos)

Each SG90 servo has 3 wires:

Servo Wire Color	Connect To
Red (VCC)	5V on Arduino
Brown/Black (GND)	GND on Arduino

⚠️ Important:
All servos must share the same GND as the Arduino.

✅ 2. Signal Pin Connections (Based on Your Code)
Servo s1 → Arduino Pin 9

Servo 1 signal wire (Orange/Yellow) → Pin 9

Power: Red → 5V

Ground: Brown/Black → GND

Servo s2 → Arduino Pin 10

Servo 2 signal wire → Pin 10

Power: Red → 5V

Ground: Brown/Black → GND

Servo s3 → Arduino Pin 11

Servo 3 signal wire → Pin 11

Power: Red → 5V

Ground: Brown/Black → GND

🧩 Breadboard Layout (Simple Version)

You can make wiring cleaner using a breadboard:

5V Line

Connect Arduino 5V → breadboard red rail

Connect all servo red wires → same red rail

GND Line

Connect Arduino GND → breadboard blue rail

Connect all servo brown/black wires → same blue rail

Signal Wires

Servo 1 signal → pin 9

Servo 2 signal → pin 10

Servo 3 signal → pin 11

🔧 Final Checklist

 Servo 1 → Signal to 9

 Servo 2 → Signal to 10

 Servo 3 → Signal to 11

 All servo red wires → 5V

 All servo brown/black wires → GND

 Arduino and servo grounds are common

 USB connected to PC for serial communication
