# IMU Attitude Monitor

A beginner embedded-systems project using an Arduino Uno and a GY-521 / MPU6050 inertial measurement unit (IMU).

> Repository note: the current GitHub repository name is temporary. The project itself is the IMU Attitude Monitor.

## Project goal

Build a small system that can:

1. Read acceleration and gyroscope data from an MPU6050.
2. Display the sensor data over Serial.
3. Estimate pitch and roll.
4. Send orientation data to a Python program.
5. Visualize the sensor orientation on a computer.
6. Learn filtering and sensor fusion.
7. Progress toward a closed-loop PID control project and, later, a small educational drone project.

## Why I am building this

This is my first practical step into:

- Embedded systems
- Sensors and instrumentation
- Python + Arduino
- Control systems
- Robotics
- Flight-control concepts

The aim is not simply to wire a sensor. I want to understand the full chain:

**physical movement -> sensor -> microcontroller -> data processing -> orientation estimate -> control**

## Current status

- Arduino Uno: **verified and programmable**
- Arduino IDE: configured
- Board: Arduino Uno
- Port: COM12
- Blink test: **successful**
- Male-to-female jumper wires: available
- GY-521 / MPU6050: ordered
- Sensor expected: 10 October 2026
- Initial Arduino IMU test program: prepared
- Wiring plan: prepared
- MPU6050 hardware testing: pending sensor arrival

## Milestones

### Milestone 0 - Arduino verified ✅

On 6 October 2026, the Arduino Uno was detected on COM12, the Blink example was uploaded successfully, and the onboard LED responded as expected.

This verified the chain:

**computer -> USB serial connection -> Arduino -> compiled program -> physical output**

### Milestone 1 - MPU6050 communication

Next target:

> Connect the MPU6050, confirm I2C communication, and print live acceleration data to the Serial Monitor.

## Hardware

- Arduino Uno
- GY-521 MPU6050 accelerometer + gyroscope
- Male-to-female jumper wires
- USB cable
- Computer running Arduino IDE

## Repository structure

```text
.
├── README.md
├── arduino/
│   ├── blink_test.ino
│   └── imu_reader.ino
└── docs/
    ├── wiring.md
    ├── roadmap.md
    ├── milestone-0.md
    └── project-log.md
```

## Safety

The current project contains no motors or propellers. Any future flying project will begin with a small, low-power, guarded educational platform and will be tested in a controlled environment away from people.

## What I want to learn

By the end of this project, I want to be able to explain:

- What an accelerometer measures
- What a gyroscope measures
- How an IMU estimates orientation
- Why sensor measurements contain noise and drift
- How filtering improves measurements
- How orientation feedback can be used by a controller
- How these ideas relate to robots and multicopters
