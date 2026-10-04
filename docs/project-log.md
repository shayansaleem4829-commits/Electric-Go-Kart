# Project Log

## 4 October 2026 - Project started

### Objective

Begin learning embedded systems and flight-control fundamentals with a small IMU project before attempting a larger drone project.

### Parts already available

- Arduino Uno
- Male-to-female jumper wires
- Computer

### Ordered

- GY-521 / MPU6050 3-axis accelerometer + 3-axis gyroscope
- Expected delivery: 10 October 2026

### Work completed before hardware arrival

- Selected the MPU6050 as the first sensor
- Identified the four required connections: VCC, GND, SDA, SCL
- Prepared a first Arduino test program
- Defined a staged learning roadmap
- Decided to document code, tests, failures, and later improvements in GitHub

### First test when the sensor arrives

1. Inspect the board and header pins.
2. Wire the sensor to the Arduino with power disconnected.
3. Install the Adafruit MPU6050, Unified Sensor, and BusIO libraries in Arduino IDE.
4. Upload the initial test program.
5. Open Serial Monitor at 115200 baud.
6. Tilt the sensor and verify that acceleration values change.

### Engineering rule for this project

Do not add new hardware merely to make the project look more impressive. Add a component only when the current stage is working and the next component teaches something specific.
