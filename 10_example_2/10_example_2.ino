#include <Servo.h>
#define PIN_SERVO 10

Servo myservo;

void setup() {
  myservo.attach(PIN_SERVO); 
  myservo.write(90);
  delay(1000);
}

void loop() {
  int a = 0;
  int b = 90;
  while(1){
    myservo.write(a);
    delay(500);
    a = a + b;
    if ((a == 180) || (a == 0)){
      b = -1*b;      
    }
  }
}
