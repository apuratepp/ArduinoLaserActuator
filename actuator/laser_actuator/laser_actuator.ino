/* 
 laser_actuator 
 Creat:     2012-08-29 (Josep)
 Modificat: 2012-09-01 (Josep)
*/

#include <Servo.h>

int led = 13;
int motionPin = 2;
int actuatorPin = 9;

Servo actuator;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(motionPin, INPUT);
  actuator.attach(actuatorPin);
}
void loop() {
  int motionVal = digitalRead(motionPin);
  if (motionVal == HIGH) {
    digitalWrite(led, HIGH);
    espanta();
  }else{
    digitalWrite(led, LOW);
  }
}


/*
  Funcio espanta()
  Posa el laser a 0º, 90º, 18º0 i torna a 0º en intervals d' 1 segon
*/
void espanta(){
  actuator.write(0);
  delay(1000);
  actuator.write(90);
  delay(1000);
  actuator.write(180);
  delay(1000);
  actuator.write(0);
}
