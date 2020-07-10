#include <Arduino.h>

void setup()
{
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  //change here
  Serial.println("LED ON here");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  Serial.println("LED OFF here");
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}