#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int redPin = 8;
const int bluePin = 9;
const int greenPin = 10;
const int forcePin = A0;
const int blueThreshold = 125;
const int redThreshold = 350;

void blinkLED(int pinNumber) {
  digitalWrite(bluePin, LOW);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(pinNumber, HIGH);
}

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(forcePin, INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
}
  
void loop() {
  int force = analogRead(forcePin);
  Serial.println(force);
  if (force > redThreshold) {
  	blinkLED(redPin);
  }
  else if (force > blueThreshold) {
    blinkLED(bluePin);
  }
  else {
    blinkLED(greenPin);
  }
  lcd.clear();
  lcd.print("Force: ");
  lcd.print(force);
  delay(100);
}