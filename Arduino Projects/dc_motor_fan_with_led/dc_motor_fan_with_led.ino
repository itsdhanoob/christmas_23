int button = 0;// variable for the button

int antState = 0;// variable for the anterior state of the button

int buttonOff = 0;// 0 = dc motor ON, 1 = dc motor OFF

void setup() {

  pinMode(4,INPUT);// BUTTON as INPUT

  pinMode(9,OUTPUT);// DC MOTOR as OUTPUT

  pinMode(7, OUTPUT);// LED as OUTPUT
}

void loop() {
  int button = digitalRead(4);// reading the state of the button

  if((button == LOW) && (antState == HIGH)){

    buttonOff = 1 - buttonOff;

  }

  antState = button;// reads the actual value 

  if(buttonOff == 1){

    digitalWrite(9,HIGH); 
    digitalWrite(7, HIGH);
  }

  else {

    digitalWrite(9, LOW);
    digitalWrite(7, LOW);
  }

}