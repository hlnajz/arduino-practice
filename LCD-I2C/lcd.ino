#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2, ct=9;
LiquidCrystal mylcd(rs, en, d4, d5, d6, d7);

void setup() {
analogWrite(ct,50);
mylcd.begin(16, 2);
mylcd.print("Yellow Purple");


  }

void loop() {

 }



