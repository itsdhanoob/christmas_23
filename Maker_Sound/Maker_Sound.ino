void setup()
   {
    pinMode(8, INPUT);
    pinMode(9, OUTPUT);
    pinMode(10, INPUT);
    pinMode(12, INPUT);
   }




void loop()
   {
    if (digitalRead(8) == 1)
     {
      tone(9, 169, 1000); // play tone 25 (C#2 = 69 Hz)
     }
    if (digitalRead(10) == 1)
     {
      tone(9, 349, 1000); // play tone 53 (F4 = 349 Hz)
     }
    if (digitalRead(12) == 1)
     {
      tone(9, 523, 1000); // play tone 60 (C5 = 523 Hz)
     }
    delay(10); // Delay a little bit to improve simulation performance
   }