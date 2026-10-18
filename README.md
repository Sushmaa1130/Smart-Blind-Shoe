# Smart-Blind-Shoe
Arduino-based obstacle detection system using HC-SR04 ultrasonic sensor and buzzer.
## Overview

This project uses an Arduino Uno, an HC-SR04 ultrasonic sensor, and a buzzer to detect nearby obstacles. When an obstacle is detected within 30 cm, the buzzer beeps five times to alert the user.

## Components Required

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* Buzzer
* Breadboard
* Jumper Wires
* USB Cable

## Circuit Connections

| Component       | Arduino Pin    |
| --------------- | -------------- |
| HC-SR04 Trig    | Digital Pin 9  |
| HC-SR04 Echo    | Digital Pin 8  |
| Buzzer Positive | Digital Pin 13 |
| HC-SR04 VCC     | 5V             |
| HC-SR04 GND     | GND            |
| Buzzer Negative | GND            |

## Working Principle

1. The ultrasonic sensor transmits ultrasonic waves.
2. The waves reflect from nearby objects and return to the sensor.
3. The Arduino calculates the distance using the echo duration.
4. If the measured distance is less than 30 cm and greater than zero, the buzzer beeps five times.
5. The measured distance is displayed in the Serial Monitor.

## Software Requirements

* Arduino IDE
* Arduino-compatible USB connection

## Applications

* Obstacle detection systems
* Robotics projects
* Basic distance measurement
* Electronic alert systems

## Programming Language

C/C++ (Arduino)

## Future Improvements

* Add an LCD to display the distance.
* Use different beep patterns for different distances.
* Integrate the sensor into a mobile robot.

## Author

SUSHMAA
