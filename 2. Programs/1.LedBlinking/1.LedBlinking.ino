/*
  LED BLINKING ON ARDUINO UNO

  
  Blinks LED connected on pin 13 of Arduino
  CONNECTIONS :
  Arduino       LED
  13            +
  GND             -

  written by
  Ashish Kumar
  ashishmarch12@gmail.com
  www.unciarobotics.com
  www.github.com/unciarobotics
*/
void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
