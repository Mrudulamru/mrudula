void setup()
{
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(6,OUTPUT);
}
void loop()
{
  int val = digitalRead(7);
  Serial.println(val);
  if(val<6000)
  {
    digitalWrite(6,HIGH);
  }
  else
  {
    digitalWrite(6,LOW);
   
  }
}
