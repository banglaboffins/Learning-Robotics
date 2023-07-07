// C++ code
//Positive-Negative Problem
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int n=0;
  
  if(n==0){
  	Serial.print(n);Serial.print(" is Zero.");
  }
  else if(n>0){
  	Serial.print(n);Serial.print(" is a positive number.");
  }
  else{
  	Serial.print(n);Serial.print(" is a negative number.");
  }
  Serial.println("");
}