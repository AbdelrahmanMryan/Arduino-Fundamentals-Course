//this code show how to mapping 2 ranges with each other
//
#define pin 3 //pwm
int pot,fad;

void setup()
{
  Serial.begin(9600);
  pinMode(pin,OUTPUT);

}//end setup
void loop()
{
  pot = analogRead(A0);//0-1023
  fad = map(pot,0,1023,0,255);
  analogWrite(pin,fad);//using pwm 0-255
  Serial.print(pot);
  Serial.print("  ");
  Serial.print(pot/1023.0*5);//mapping 0-1023--->0-5V
  Serial.print(" * ");
  Serial.print(fad);
  Serial.print("  ");
  Serial.println(fad/255.0*5);
  delay(100);
  
}//end loop