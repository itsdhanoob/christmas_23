#define R 13
#define Y 12
#define G 8
#define BUTTON_PIN 2
void setup()
{
  pinMode(R, OUTPUT);
  pinMode (Y, OUTPUT);
  pinMode (G,OUTPUT);
  pinMode (BUTTON_PIN, INPUT);
  Serial.begin (9600);
}

void loop()
{
 digitalWrite (G, HIGH);
  int iButtonState = digitalRead (BUTTON_PIN);
  if (iButtonState == LOW)
  {
    Serial.println ("The button is pressed.");
    trafficLight ();
  }
}

void trafficLight ()
{
  //GREEN
  digitalWrite (G, HIGH);
  Serial.println ("Time to pass.");
  delay (5000);
  digitalWrite (G, LOW);
  
  // YELLOW
  digitalWrite (Y, HIGH);
    Serial.println ("Slow down...");
  delay (1000);
  digitalWrite (Y, LOW);
  
  // RED
  digitalWrite (R, HIGH);
  Serial.println ("stand by.");
  delay (2000);
  digitalWrite (R, LOW);
}
