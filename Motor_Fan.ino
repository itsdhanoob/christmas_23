int button = 8;     //buttonpin
int motor = 3;
const int ledPin =  13;      // the number of the LED pin


void setup()
{
pinMode(button , INPUT);
pinMode(motor , OUTPUT);
// initialize the LED pin as an output:
 pinMode(ledPin, OUTPUT);
}

void loop()
{

  int Buttonstate = digitalRead(button);
  
  if (Buttonstate == 1){
  
  digitalWrite(motor , LOW);
  // turn LED on:
  digitalWrite(ledPin, HIGH);
    
  } else {
  
  digitalWrite(motor , HIGH);
  
  // turn LED off:
   digitalWrite(ledPin, LOW);  
   
  
  }
  
  
  
  
}