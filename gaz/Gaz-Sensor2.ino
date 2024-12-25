#include "MQ2.h"

#define PIN_MQ2 A1
#define RED     13
#define BLU     7
MQ2 mq2(PIN_MQ2);

int lpg, co, smoke;

void setup() {
  Serial.begin(9600);
  mq2.begin();
  pinMode(RED, OUTPUT);
  pinMode(BLU, OUTPUT);
}

void loop() {
   float* values = mq2.read(true);

   lpg = mq2.readLPG();
   co = mq2.readCO();
   smoke = mq2.readSmoke();

   Serial.println("LPG - " + String(lpg));
   Serial.println("CO - " + String(co));
   Serial.println(" ");

   if (lpg > 100) { digitalWrite(RED, HIGH); }
   if (co > 100) { digitalWrite(BLU, HIGH); }
   else { digitalWrite(RED, LOW); digitalWrite(RED, BLU); }

   delay(200);
}