int led = 13;  //initializing to the onboard LED 


void setup() {
  // put your setup code here, to run once:

  pinMode(led, OUTPUT); //Set the mode for variable led as OUTPUT

}

void loop() {
  // put your main code here, to run repeatedly:
  int lDelay = 500;   //Delay parameter for LED (On state)
  int oDelay = 100;   //Delay parameter for LED (Off state)

  int i;
  for(i=1; i<10;i++){
    if(i<2){
      lDelay = 500;
      oDelay = 500;
      
      }
    else{
      lDelay = 100;
      oDelay = 100;
      
      }

    digitalWrite(led, HIGH);  //Setting the LED to ON position
    delay(lDelay);            //Adding delay before going to next line
    digitalWrite(led, LOW);   //Setting the LED to OFF position
    delay(oDelay);            //Delay before going to next iteration
    if(i == 4){
      delay(400);
      }    
    }

}
