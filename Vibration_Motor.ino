// C++ code
//
int jarak = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  jarak = 0.01723 * readUltrasonicDistance(11, 10);
  if (jarak <= 200) {
    digitalWrite(4, HIGH);
    tone(3, 523, 1000); // play tone 60 (C5 = 523 Hz)
  } else {
    digitalWrite(4, LOW);
    noTone(3);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
