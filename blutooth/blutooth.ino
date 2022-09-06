#include <SoftwareSerial.h>
SoftwareSerial MyBlue(7,9);
int flag = 0;
int LED = 8;
void setup()
{
  Serial.begin(9600);
  MyBlue.begin(9600);
  pinMode(LED,OUTPUT);
  Serial.println("Ready to connect");
}
void loop()
{
  if (MyBlue.available()}
  flag = MyBlue read();
  if(flag==1)
  {
    digitalWrite(LED,LOW);
    Serial.println("LED off");
  }
  
}
