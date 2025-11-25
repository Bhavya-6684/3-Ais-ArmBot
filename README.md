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
