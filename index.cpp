#include <LiquidCrystal.h>

// set the pins that you've wire on breadboard and arduino

const int rs = 12, enable = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

// and then assign defined variables on lcd 
LiquidCrystal lcd(rs, enable, d4, d5, d6, d7);

// if you have a lcd bigger than 16x2:
// you have to set the variable of Rows and Cols
// and then set it to args of lcd.begin();

const int numRows = 2;
const int numCols = 16;

void setup() {
  lcd.begin(numCols, numRows);
  lcd.print("By tashi");
}

void loop() {
  // in loop you can use scroll functions, blink, and more
  // and make you lcd more interactive,
  // read the liquidcrystal library :D
}

