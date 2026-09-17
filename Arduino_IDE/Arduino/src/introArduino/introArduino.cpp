#include <Arduino.h>

int led1 = 12;
int led2 = 13;
int Bot1 = A1;
int bot2 = A2;


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(Bot1, INPUT);
  pinMode(bot2, INPUT);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
} 


void loop() {
  if (digitalRead(Bot1) == 1 && digitalRead(bot2) == 0){
    digitalWrite(led1, HIGH);
  
  }
  if (digitalRead(Bot1) == 0 && digitalRead(bot2) == 1){
    digitalWrite(led2, HIGH);
  }

  if (digitalRead(Bot1) == 1 && digitalRead(bot2) == 1){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(500); 
  } 
  

}

              
