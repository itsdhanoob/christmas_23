void setup() 
{
  pinMode(9, OUTPUT);
}

void loop() 
{
  digitalWrite(9, HIGH);
  delay(5000);  //wait for 5 seconds
  digitalWrite(9, LOW);
  delay(5000);  //wait for 5 seconds
}