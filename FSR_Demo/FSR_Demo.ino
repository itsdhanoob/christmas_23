/* Arduino example code to control multiple LEDs with a Force Sensitive Resistor (FSR) as pressure sensor. More info: https://www.makerguides.com */
// Define pins:
#define fsrpin A0
#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7

// Define variables:
int fsrreading;
void setup() {
  
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
  
  // Set LED pins as output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}
void loop() {
  
  // Read the FSR pin and store the output as fsrreading:
  fsrreading = analogRead(fsrpin);
  
  // Print the fsrreading in the serial monitor:
  Serial.println(fsrreading);
  
  // Control the LEDs:
  if (fsrreading > 150) {
    digitalWrite(led1, HIGH);
  }
  else digitalWrite(led1, LOW);
  if (fsrreading > 300) {
    digitalWrite(led2, HIGH);
  }
  else digitalWrite(led2, LOW);
  if (fsrreading > 450) {
    digitalWrite(led3, HIGH);
  }
  else digitalWrite(led3, LOW);
  if (fsrreading > 600) {
    digitalWrite(led4, HIGH);
  }
  else digitalWrite(led4, LOW);
  if (fsrreading > 750) {
    digitalWrite(led5, HIGH);
  }
  else digitalWrite(led5, LOW);
  if (fsrreading > 900) {
    digitalWrite(led6, HIGH);
  }
  else digitalWrite(led6, LOW);
}