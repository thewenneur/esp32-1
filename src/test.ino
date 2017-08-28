#include "Arduino.h"

// Set LED_BUILTIN if it is not defined by Arduino framework
// #define LED_BUILTIN 13

void setup()
{
Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("Démarage du débogage: ");
}

void loop()
{
  Serial.println("nouvelle loop. La LED va s'allumer.");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
Serial.println("La LED va s'éteindre.");
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
