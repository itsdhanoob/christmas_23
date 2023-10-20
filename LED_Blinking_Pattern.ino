// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(13, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(13, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(13, LOW);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(2, HIGH);
  digitalWrite(13, HIGH);
  delay(1700); // Wait for 1700 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}