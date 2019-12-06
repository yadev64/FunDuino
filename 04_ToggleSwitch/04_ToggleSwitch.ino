//Toggle switch using push button


int led = 2;                            //LED at pin 2
int button = 3;                         //Button at pin 3
bool toggle = 0;                        //Toggle parameter

void setup() {

  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);                   //Just for using the serial monitor on your computer

}

void loop() {

  
  int status1 = digitalRead(button);    //Read button status
  if (status1 == 0){                    //if Button status says that it's pressed (ie, its '0')
    toggle = !toggle;                   //invert toggle
    digitalWrite(led, toggle);          //Output the toggle value via the LED
    Serial.println("Toggle: ",toggle);  //Output the toggle value to the serial monitor
    delay(200);                         //Delay to control the bouncing
  }
}
