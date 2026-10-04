# Project Roadmap

The project is intentionally staged so that each step teaches one new engineering idea.

## Stage 1 - Raw IMU data

- Connect MPU6050 to Arduino
- Confirm I2C communication
- Read acceleration
- Read angular velocity
- Observe how values change when the sensor moves

**Goal:** understand what the sensor actually measures.

## Stage 2 - Pitch and roll

- Convert acceleration measurements into rough tilt estimates
- Compare calculated orientation against physical movement

**Goal:** connect vectors and trigonometry to a real sensor.

## Stage 3 - Python visualization

- Send orientation data over Serial
- Read the stream in Python
- Plot data
- Make a simple visual object respond to sensor movement

**Goal:** connect embedded hardware to desktop software.

## Stage 4 - Noise and filtering

- Record stationary sensor data
- Examine noise
- Compare raw data against filtered data
- Learn why gyroscope drift and accelerometer noise behave differently

**Goal:** understand why real-world measurements are imperfect.

## Stage 5 - Sensor fusion

- Combine accelerometer and gyroscope information
- Start with a complementary filter
- Study more advanced estimation methods later

**Goal:** produce a more stable orientation estimate.

## Stage 6 - Closed-loop control

- Simulate a PID controller
- Use sensor measurements as feedback
- Control a safe low-power actuator or test platform

**Goal:** understand the loop:

```text
desired state
     |
     v
error -> controller -> actuator -> physical system
  ^                                  |
  |                                  v
  +------------- sensor <------------+
```

## Stage 7 - Small educational multicopter

Only after the sensing and control stages are understood:

- Study multicopter axes and motor mixing
- Learn how flight controllers use IMU measurements
- Use a small, low-power, guarded platform
- Document testing and design changes

**Goal:** apply sensing, estimation, and feedback control to a real dynamic system.

## Long-term engineering themes

This project supports later study in:

- Electrical and computer engineering
- Embedded systems
- Robotics
- Mechatronics
- Control theory
- Aircraft dynamics
- Autonomous systems
