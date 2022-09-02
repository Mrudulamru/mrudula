int buzz=6;
int fade=A2;

void setup()
{
  Serial.begin(9600);
  pinMode(fade,INPUT);
}
void loop()
{
  int fadeval=analogRead(fade);
  Serial.println(fadeval);
  analogWrite(buzz,fadeval);
  
}
