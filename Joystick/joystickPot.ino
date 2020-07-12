/*
 * Ian McTavish
 * July 11, 2020
 * Joystick - potentiometer
 * Goal: wire up pins of Y axis from left to right Ground, A0, VCC
 * Uses: https://www.sparkfun.com/products/9032 
 */

 int y; //inital test for just the y axis
 
void setup() {
  // setup code, runs once:
  y = 0;
  Serial.begin(9600);
  Serial.println("Joystick potentiometer test program - y axis");
  Serial.println("Move the y axis, the serial monitor will update the values.");
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  y = analogRead(A0);
  Serial.println(y);
  delay(100);

}
