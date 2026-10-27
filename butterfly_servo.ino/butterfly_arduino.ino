#include <Servo.h>

Servo leftWing;   // Левое крыло
Servo rightWing;  // Правое крыло

void setup() {
  leftWing.attach(9);   // Пин 9
  rightWing.attach(10); // Пин 10
}

void loop() {
  // Движение в одну сторону (например, крылья сходятся)
  for (int angle = 30; angle <= 120; angle++) {
    leftWing.write(angle);
    rightWing.write(180 - angle); // Зеркальное движение
    delay(15);
  }

  // Движение в обратную сторону (крылья расходятся)
  for (int angle = 120; angle >= 30; angle--) {
    leftWing.write(angle);
    rightWing.write(180 - angle); // Зеркальное движение
    delay(15);
  }
}