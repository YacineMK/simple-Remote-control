
 
 const int kPinJoystickX = A4;
 const int kPinJoystickY = A5;
 const int kPinJoystickFire = 8;

 const int JOYX_LEFT = 300;
 const int JOYX_RIGHT = 700;
 const int JOYY_UP = 700;
 const int JOYY_DOWN = 300;

 void setup()
 {
 pinMode(kPinJoystickFire, INPUT);
 digitalWrite(kPinJoystickFire, HIGH); // turn on pull-up ←!"→ resistor
 Serial.begin(9600);
    pinMode (6,INPUT);
      pinMode (2,INPUT);
 }

 void loop()
 {
 int xVal = analogRead(kPinJoystickX);
 int yVal = analogRead(kPinJoystickY);
digitalRead (xVal);

 if(xVal < JOYX_LEFT){
   Serial.println ("L");
      delay(400);
 }
 else if(xVal > JOYX_RIGHT){
     Serial.println ("R");
        delay(400);
 }
 digitalRead (yVal);
 if(yVal < JOYY_DOWN){
     Serial.println ("S");
        delay(400);
 }
 else if(yVal > JOYY_UP){
    Serial.println ("N");
       delay(400);
 }
  boolean  e=digitalRead(6);
  boolean  s=digitalRead(2);
  if (e==HIGH){ 
   Serial.println("UP"); 
    delay(400);
  }

  if (s==HIGH){ 
   Serial.println("DOWN"); 
    delay(400);
  }
 }
 
