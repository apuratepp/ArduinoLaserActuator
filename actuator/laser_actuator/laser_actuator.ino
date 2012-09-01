/* 
  laser_actuator 
  Creat:     2012-08-29 (Josep)
  Modificat: 2012-09-01 (Josep)

*/

int led = 13;

void setup() {
 pinMode(led, OUTPUT); 
}
void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
