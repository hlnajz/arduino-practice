
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystallcd(rs, en, d4, d5, d6, d7);

void setup() {
lcd.begin(16, 2);
lcd.print("Yellow Purple");
delay(1000);
}

void loop() {

  for (int Position = 0; Position < 15; Position++) {

lcd.scrollDisplayLeft();

delay(400);
  }

  for (int Position = 0; Position< 31; Position++) {

lcd.scrollDisplayRight();

delay(400);
  }

  for (int Position = 0; Position < 16; Position++) {

lcd.scrollDisplayLeft();
delay(150);
  }

delay(700);

}