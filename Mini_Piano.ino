
const int buttonPins[] = {10 , 9, 8,7 , 6, 5, 4}; // Pins for the push buttons
const int ledPins[] = {2, 12, 13, A0, A1, A2, A3}; // Pins for the LEDs
const int buzzerPin = 11; // Pin for the buzzer

const int notes[] = {240, 270, 300, 320, 360, 400, 450}; // freuqncy in Hz for Notes (C, D, E, F, G, A, B)
const int noteDuration = 100; // Duration of each note (in milliseconds)

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP); // Set the button pins as INPUT with internal pull-up resistors
    pinMode(ledPins[i], OUTPUT); // Set the LED pins as OUTPUT
  }
  pinMode(buzzerPin, OUTPUT); // Set the buzzer pin as OUTPUT
}

void loop() {
  for (int i = 0; i < 7; i++) {
    if (digitalRead(buttonPins[i]) == LOW) {
      
      // Button is pressed
      digitalWrite(ledPins[i], HIGH); // Turn on the corresponding LED
      
      playTone(notes[i], noteDuration); // Play the note using the playtone function
      
      digitalWrite(ledPins[i], LOW); // Turn off the LED
      
      delay(0); // Debounce delay to prevent multiple notes from playing
    }
  }
}

//creating the PlayTone Function 
void playTone(int note, int duration) {
  
  tone(buzzerPin, note, duration); // Play the note on the buzzer
  
  delay(duration); // Delay for note duration
  
  noTone(buzzerPin); // Turn off the buzzer
}


