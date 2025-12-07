## Project Description
This project demonstrates a functional robotic arm controlled through a STC15W408AS joystick & servo controller board. The system includes four servo motors controlling the base, shoulder, elbow, and claw. 

The goal of this project was to design, assemble, and document a robotic system using a pre-programmed microcontroller without writing custom Arduino code.

The project includes:
- Fully assembled 4-DOF robotic arm
- Joystick-based manual control interface
- Wiring schematics and mechanical design
- 3D model references
- Demonstration video
- Project proposal and outcome analysis

---

## Key Features
- Real-time analog joystick control
- Smooth servo motion using pre-programmed PWM signals
- Modular mechanical design (acrylic or wood)
- Expandable for additional automation
- LED status indicators for joystick/buttons

---

## Hardware Setup
1. Connect servo motors to SG1–SG4 outputs on the controller board.
2. Connect two joysticks to X/Y input channels.
3. Connect power: 5V for servos and board, GND common.
4. Optionally connect buttons KEY1–KEY9 for mode control.
5. The board is factory-programmed; no additional coding is required.

---

## Usage
- Move the joystick left/right to rotate the base.
- Move the joystick forward/backward to move the shoulder.
- Elbow and claw are controlled by preset joystick axes or buttons.
- LED indicators show joystick movements and button presses.
- Demo video link is available in /video folder.

---

## Firmware Information
This controller board uses an STC15W408AS microcontroller with factory-installed firmware that handles:
- Analog reading of joystick axes
- Digital reading of buttons (KEY1–KEY9)
- PWM generation for 4 servo motors
- LED status indication

Since the device includes a pre-installed closed-source firmware, no Arduino code is required.

---

## Project Outcomes
- Fully functional robotic arm achieved
- Smooth servo control using STC15 firmware
- Mechanical assembly completed
- Complete GitHub documentation and demonstration
