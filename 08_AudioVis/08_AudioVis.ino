/* Let's visualize some audio signals using LEDs.
 *  For this, connect the audio (Left or Right) channel to the A1 pin.
 *  Connect the audio ground to any of the arduino GND
 *  
 *  Then, run this code :D
 */


int led1 = 10;         //Assign LED1
int led2 = 8;         //Assign LED2
int led2 = 7;         //Assign LED3
int led2 = 6;         //Assign LED4
int led2 = 5;         //Assign LED5
int apin = A1;       //Assign the Audio Input


void setup() {

  pinMode(led1, OUTPUT);     //LED to OUTPUT mode
  pinMode(led2, OUTPUT);     //LED to OUTPUT mode
  pinMode(apin, INPUT);      //Audio to INPUT mode

  //This is where we initialize the seiral monitor
  Serial.begin(9600);       //9600 is the baud rate

}

void loop() {

  float potVal = analogRead(apin) / 4 ;                //Read the Audio signal level

  if(potVal>1){

    digitalWrite(led1, HIGH);                           //If audio level is above a certain Limit, turn the LED1 on   
  }

  if(potVal>2){

    digitalWrite(led2, HIGH);                           //If audio level is above a certain Limit, turn the LED2 on 
  }

  if(potVal>3){

    digitalWrite(led3, HIGH);                           //If audio level is above a certain Limit, turn the LED3 on 
  }

  if(potVal>4){

    digitalWrite(led4, HIGH);                           //If audio level is above a certain Limit, turn the LED4 on 
  }

  if(potVal>5){

    digitalWrite(led5, HIGH);                           //If audio level is above a certain Limit, turn the LED5 on 
  }

  delay(50);                                          //Wait for 50 milliseconds
  digitalWrite(led1, LOW);                            //Turn off the LED1
  digitalWrite(led2, LOW);                            //Turn off the LED2

  
  
  Serial.print("Audio reading : ");                    //Used to print to the serial console
  Serial.println(potVal);
  

}
