#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(2);
}

void loop() {
  myServo.write(0);
  delay(1500);
  
  myServo.write(300);
  delay(1500);
}
