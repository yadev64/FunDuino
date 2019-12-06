int led = 2;      //initialize pin 2 for the LED
int button = 3;   //initialize pin 3 for the button

void setup() {
  
  pinMode(led, OUTPUT);               //Set the mode for LED as OUTPUT
  pinMode(button, INPUT_PULLUP);      //Set the mode for button as INPUT_PULLUP (Do refer INPUT_PULLUP on arduino.cc

}

void loop() {

  int status = digitalRead(button);   //read button status  (status = 1 [or HIGH] when not pressed and vise versa
  digitalWrite(led, status);          //output the button status via LED
  
}
