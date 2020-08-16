#include<NewPing.h>

#define TRIGGER_PIN 11
#define ECHO_PIN 12
#define MAX_DISTANCE 200

#include<Servo.h>
Servo servo;

NewPing sonar(TRIGGER_PIN,ECHO_PIN,MAX_DISTANCE);

void setup() { 
  Serial.begin(9600);
  servo.attach(8);
  servo.write(0);
}

void loop() {
  delay(1000);
  int distance = sonar.ping_cm();
  Serial.print(distance);
  Serial.println("cm");
  if(distance<=10)
  {
    servo.write(90);
    }
    else{
      servo.write(0);
      }
}
