//This super simple code is my work, Signed, Crypto1-dev.
//To test if ARDUINO(not tft) is working with IDE.

#include <iostream> //very optional
#include <Arduino.h> //optional for IDE(meant for cpp general support

void setup() { //set up code
  pinMode(13, OUTPUT); //replace with boards Built-in LED Pin
}

void loop() { //loop
  digitalWrite(13, HIGH); //turn on led
  delay(1000); //wait 1 second
  digitalWrite(13, LOW); 
  delay(1000); //wait 1 second
}

int main() { //optional
   return 0;
}
