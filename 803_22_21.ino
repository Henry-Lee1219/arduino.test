#include <Servo.h>
Servo C;
int X = 0;
int y = 0;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(A5, INPUT);
  pinMode(13, OUTPUT);
  C.attach(13);
  C.write(40);
  X = analogRead(A5);
}
void loop() {
  Serial.println(analogRead(A5));
  delay(1);
  if (analogRead(A5) > 300 ) {
    y = 0;
  } else {
    y = 1;
  }

  if (analogRead(A5) < X -10 & y == 0){
    C.write(20);
  delay(200);
  C.write(40);
  delay(100);
}

  if (analogRead(A5) > 80 & y == 1) {
    C.write(20);
    delay(200);
    C.write(40);
    delay(100);
}
}
