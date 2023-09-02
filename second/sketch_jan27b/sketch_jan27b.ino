#include <LiquidCrystal.h>
LiquidCrystal lcd(13 , 12 , 11 , 10 , 9 , 8);

int number;
int number2 = -1;
void setup() {
  pinMode(7 , OUTPUT);
  pinMode(6 , OUTPUT);
  lcd.begin(16,2);
  lcd.print("started");
}

void loop() {
  
  number = analogRead(A0);
  if (number != number2){
      lcd.clear();
      lcd.print(number / 2 - 1);
    }
  if ( number / 2 - 1 > 37 ) {
      analogWrite(6 , 50);
      digitalWrite(7, LOW);
    }
  else{ 
      digitalWrite(6 , LOW);
      digitalWrite(7, HIGH);
    } 

  number2 = number;
  
}
