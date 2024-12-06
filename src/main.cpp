#include <Arduino.h>
int myFunction(int, int);
int st1 = 15;
int ledG1 = 23;
int ledY1 = 19;
int ledR1 = 18;
int ledG2 = 5;
int ledY2 = 17;
int ledR2 = 16;
void setup() {
 pinMode(st1, INPUT);
 pinMode(ledG1, OUTPUT);
 pinMode(ledY1, OUTPUT);
 pinMode(ledR1, OUTPUT);
 pinMode(ledG2, OUTPUT);
 pinMode(ledY2, OUTPUT);
 pinMode(ledR2, OUTPUT);
}

void loop() {
  int a = digitalRead(st1);
  if (a == HIGH) 
  {
    digitalWrite(ledG1, HIGH);
    digitalWrite(ledY1, HIGH);
    digitalWrite(ledR1, HIGH);
    digitalWrite(ledG2, HIGH);
    digitalWrite(ledY2, HIGH);
    digitalWrite(ledR2, HIGH);
    delay(1000);
    digitalWrite(ledG1, LOW);
    digitalWrite(ledY1, LOW);
    digitalWrite(ledR1, LOW);
    digitalWrite(ledG2, LOW);
    digitalWrite(ledY2, LOW);
    digitalWrite(ledR2, LOW);
    delay(1000);
  }
  else
  {
    digitalWrite(ledG1, HIGH);
    digitalWrite(ledY1, LOW);
    digitalWrite(ledR1, LOW);
    digitalWrite(ledG2, LOW);
    digitalWrite(ledY2, LOW);
    digitalWrite(ledR2, HIGH);
    delay(1000);
    digitalWrite(ledG1, LOW);
    digitalWrite(ledY1, HIGH);
    digitalWrite(ledR1, LOW);
    digitalWrite(ledG2, LOW);
    digitalWrite(ledY2, LOW);
    digitalWrite(ledR2, HIGH);
    delay(1000);
    digitalWrite(ledG1, LOW);
    digitalWrite(ledY1, LOW);
    digitalWrite(ledR1, HIGH);
    digitalWrite(ledG2, HIGH);
    digitalWrite(ledY2, LOW);
    digitalWrite(ledR2, LOW);
    delay(1000);
    digitalWrite(ledG1, LOW);
    digitalWrite(ledY1, LOW);
    digitalWrite(ledR1, HIGH);
    digitalWrite(ledG2, LOW);
    digitalWrite(ledY2, HIGH);
    digitalWrite(ledR2, LOW);
    delay(1000);
  }
}