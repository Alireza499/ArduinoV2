#include <LiquidCrystal.h>
LiquidCrystal lcd(13 , 12 , 11 , 10 , 9 , 8);

char AZ = 'a' - 1 ;
void setup() {
  pinMode(7 , INPUT_PULLUP);

  lcd.begin(16,2);
  lcd.print("started");
}

void loop() {



  if (digitalRead(7)==0){
      while(digitalRead(7)==0){}
      lcd.clear();
      AZ = AZ + 1;
      if (AZ > 'z'){
        AZ = 'a';
        
        }
      lcd.print(AZ) ;
    }
  
}
