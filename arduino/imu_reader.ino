#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;

void setup() {
  Serial.begin(115200);

  if (!mpu.begin()) {
    Serial.println("MPU6050 not found");
    while (1) {
      delay(10);
    }
  }

  Serial.println("MPU6050 connected!");
}

void loop() {
  sensors_event_t acceleration;
  sensors_event_t gyroscope;
  sensors_event_t temperature;

  mpu.getEvent(&acceleration, &gyroscope, &temperature);

  Serial.print("Accel X: ");
  Serial.print(acceleration.acceleration.x);

  Serial.print("  Y: ");
  Serial.print(acceleration.acceleration.y);

  Serial.print("  Z: ");
  Serial.println(acceleration.acceleration.z);

  delay(250);
}
