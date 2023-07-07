// C++ code
//String : a collection of char ""
void setup()
{
  Serial.begin(9600);
  String s1="Hello World!";
  
 // int len=s1.length();
 // Serial.println(len);
 //	char character=s1.charAt(4);
 // Serial.println(character);
 //	String subString=s1.substring(4,10);
 //	Serial.println(subString);
  
 //  String in="1234",out="abcd";
 //  String sum=in+out;//"hello"+"world"="helloworld", "abcd"+"@#$"="abcd@#$"
  
 //  Serial.println(sum);
   
  //Type casting
  // String num1="5",num2="15";
  // int intNum1=num1.toInt();
  // int intNum2=num2.toInt();
  // Serial.println(intNum1+intNum2);
  s1.toUpperCase();
  Serial.println(s1);
  s1.toLowerCase();
  Serial.println(s1);
}

void loop()
{
  
}