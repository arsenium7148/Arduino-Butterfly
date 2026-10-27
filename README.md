# Arduino Butterfly Servo Mechanism

Built a simple mechanical butterfly using an Arduino Uno. The wings move using two small servos (SG90) set up to mirror each other's movement.

## Parts list
* Arduino Uno board
* 2x SG90 Micro Servos
* Breadboard + jumper wires
* External 5V power supply (pretty much required)

## Wiring
* **Left Servo (Signal):** Pin 9
* **Right Servo (Signal):** Pin 10
* **Power (Red wires):** 5V rail from external PSU
* **Ground (Brown):** Shared GND with Arduino

> **Heads up:** Running both servos straight off the Arduino 5V pin with the wings attached will pull too much current, causing the board to reset constantly. Use a separate 5V supply and make sure to tie the grounds together.

## Quick setup
1. Open `butterfly_servo.ino` in Arduino IDE.
2. Select your Uno board, compile, and upload.
