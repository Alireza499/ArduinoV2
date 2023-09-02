#include <LiquidCrystal.h>
LiquidCrystal lcd(13 , 12 , 11 , 10 , 9 , 8);

int number;
int number2 = -1;
void setup() {
  pinMode(7 , INPUT_PULLUP);
  pinMode(6 , INPUT_PULLUP);

  lcd.begin(16,2);

  lcd.print("started");

  
}

void loop() {
  
  number = analogRead(A0);
  
  if (number != number2){
      lcd.clear();
      lcd.print(number / 2 - 1);
    }
   

  number2 = number;
  
}
