#include <Arduino.h>
int led1 = 23;
int led2 = 19;
int led3 = 18;
int led4 = 5;
int led5 = 17;
int led6 = 16;
int led7 = 4;
int led8 = 8;
int g1 = 36;
void setup() {
    pinMode (led1, OUTPUT);
    pinMode (led2, OUTPUT);
    pinMode (led3, OUTPUT);
    pinMode (led4, OUTPUT);
    pinMode (led5, OUTPUT);
    pinMode (led6, OUTPUT);
    pinMode (led7, OUTPUT);
    pinMode (led8, OUTPUT);
 }

 void loop() {
    int ss1 = analogRead(g1);

    if (ss1 <= 500) 
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
    } else if (ss1 <= 1000)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
    } else if (ss1 <= 2000)
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, LOW);
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
    } else 
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led8, LOW);
    }
    
    
    

 }