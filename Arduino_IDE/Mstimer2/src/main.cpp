#include <Arduino.h>
#include <MsTimer2.h>

int buzzer = 3;
int led1 = 13;


void interromper_timer2()
{
    digitalWrite(buzzer, !digitalRead(buzzer));
}

void setup()
{

  MsTimer2::set(500, interromper_timer2);
  MsTimer2::start();
}

void loop()
{
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(1000);
}


