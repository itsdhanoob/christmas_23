#include <Servo.h>
#include <SoftwareSerial.h>

int pos = 0;
int sensorValue = 0;
int i = 0;

Servo servo_9;

void setup()
{
  servo_9.attach(9);
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop()
{

   sensorValue = analogRead(A0);
   pos = map(sensorValue,0,1023,0,180);
  
  Serial.print("sensorValue ");
  Serial.println(sensorValue);
  Serial.print("pos ");
  Serial.println(pos); 
  
  for (i = 0; i <= pos; i++) {
                      
    // tell servo to go to position in variable 'pos'
    servo_9.write(i);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (i= pos; i >= 0; i --) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(i);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
}