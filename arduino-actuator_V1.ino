// Program to control the actuator using two button and servo library 
// Connect Switch to 7, 8 in Arduino Uno/nano/Mini 
// Connect actuator pwn pin to 9 

Servo actuator;     // Creating servo object variable
int pos = 0         // Initial position of actuator , Global variable

void setup()
{
  pinMode(7,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
  actuator.attach(9);
  actuator.write(pos);          // At start of program, actuator set to Initial Position
}

void loop() 
{
  if (digitalRead(7) == LOW)
     {
      delay(200);     // debounce delay
      pos += 10;      // increment position
     }
  else if (digitalRead(8) == LOW)
      {
       delay(200);    // debounce delay
       pos -= 10;     // decrement position
      } 
  actuator.write(pos);   
      

}
