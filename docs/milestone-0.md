# Milestone 0 - Arduino Uno Verified

**Date:** 6 October 2026  
**Result:** Successful

## Objective

Verify that the Arduino Uno can be detected, programmed, and used to produce a physical output before adding the MPU6050 sensor.

## Configuration

- Board: Arduino Uno
- Port: COM12
- IDE: Arduino IDE 2.x
- Test program: Blink

## Procedure

1. Connected the Arduino Uno to the laptop by USB.
2. Verified COM12 by unplugging and reconnecting the board.
3. Selected Arduino Uno as the board.
4. Opened the built-in Blink example.
5. Uploaded the sketch.
6. Observed the onboard LED.

## Result

The onboard LED blinked on and off repeatedly as programmed.

This confirms the complete first hardware/software path:

**computer -> USB serial -> microcontroller -> uploaded code -> physical output**

## Why this matters

The purpose of this test was not the LED itself. It established that the programming environment and microcontroller are working before adding more variables such as I2C wiring, sensor libraries, and IMU hardware.

## Next milestone

Connect the GY-521 / MPU6050 and confirm live accelerometer and gyroscope readings over Serial.
