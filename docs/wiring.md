# Wiring

For the first version, the GY-521 / MPU6050 connects directly to the Arduino Uno with four jumper wires.

## Connections

| GY-521 / MPU6050 | Arduino Uno |
|---|---|
| VCC | 5V* |
| GND | GND |
| SDA | SDA / A4 |
| SCL | SCL / A5 |

* Follow the voltage specification printed on or supplied with the exact breakout board. A typical GY-521 breakout includes onboard regulation and is commonly powered from 5 V on an Arduino Uno.

## Jumper orientation

With a board that has soldered male header pins:

- Female end of jumper -> MPU6050 header pin
- Male end of jumper -> Arduino Uno socket

## Pins not needed yet

The following pins are not required for the first milestone:

- XDA
- XCL
- AD0
- INT

## Basic wiring diagram

```text
GY-521 / MPU6050          Arduino Uno

VCC   ------------------> 5V
GND   ------------------> GND
SDA   ------------------> SDA / A4
SCL   ------------------> SCL / A5
```

## Before connecting power

1. Unplug the Arduino from USB.
2. Check every wire against the labels printed on both boards.
3. Confirm VCC and GND are not reversed.
4. Connect the USB cable only after the wiring has been checked.
