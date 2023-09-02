

#include <LiquidCrystal.h>
#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns



int i=0;
char A[4] = {'-1','-1','-1','-1'};
char EnterCode[4] = {'1','3','7','8'};



char keys[ROWS][COLS] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'},
    {'*','0','#'}
};

byte rowPins[ROWS] = {10, 9, 8, 7}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {13, 12, 11}; //connect to the column pinouts of the keypad

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
    pinMode(6,OUTPUT);
}

void loop() {
char key = keypad.getKey();
    if(i > 3){
        if( A[0] == EnterCode[0] && A[1] == EnterCode[1] && A[2] == EnterCode[2] && A[3] == EnterCode[3] ){
            digitalWrite(6,HIGH);
            i = 0;
          }
        else{
          int j=0;
          while(j <= 3){
            A[j] = '-1';
            j++;
            }
          i = 0;
          }
      
      }
    if (key) {
       A[i] = key;
       i++;
    }


}
