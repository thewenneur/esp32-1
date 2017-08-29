#include "Arduino.h"

// Set LED_BUILTIN if it is not defined by Arduino framework
// #define LED_BUILTIN 13

void setup()
{
Serial.begin(9600);
  pinMode(16, OUTPUT);
  Serial.println("Démarage du débogage: ");
}

void loop()
{
  Serial.println("nouvelle loop. La LED va s'allumer.");
  digitalWrite(16, HIGH);
  delay(1000);
Serial.println("La LED va s'éteindre.");
  digitalWrite(16, LOW);
  delay(100);
  digitalWrite(16, HIGH);
  delay(100)
  digitalWrite(16, LOW);
   // wait for a second
  delay(7000);
}
