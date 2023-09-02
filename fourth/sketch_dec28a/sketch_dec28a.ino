
int greenTime=1500;
int yellowTIME=200;
int redTime = 4500;


float zarib = 1;
void setup() {

  pinMode(7,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  pinMode(12,INPUT_PULLUP);

  

  attachInterrupt(0, func2 , FALLING);
  attachInterrupt(1, func3 , FALLING);
  
  pinMode(8,OUTPUT); // green
  pinMode(9,OUTPUT); // yellow
  pinMode(10,OUTPUT); // red
}

void loop() {
  
  
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(int(greenTime * zarib));
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(int(yellowTIME * zarib));
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(int(redTime * zarib));
}


void func2(){
  while(digitalRead(2)==0){}         
  zarib = zarib + 0.1;    

}
void func3(){
  while(digitalRead(3)==0){}         
  zarib = zarib - 0.1;    
  if(zarib < 0.1){
      zarib = 0.1;
    
    }  
}
