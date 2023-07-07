// C++ code
//RGB LED
int red=13,blue=12,green=11;

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  //rbgBlink();
  //grbBlink();
  //yellowBlink();
  pinkBlink();
}

void rbgBlink(){
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  delay(1000);
  
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  delay(1000);
  
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  delay(1000);
}

void grbBlink(){
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  delay(1000);
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  delay(1000);
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  delay(1000);
}

void yellowBlink(){
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  delay(2000);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  delay(2000);	
}

void pinkBlink(){
  digitalWrite(green,HIGH);
  digitalWrite(blue,HIGH);
  delay(2000);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
  delay(2000);	
}