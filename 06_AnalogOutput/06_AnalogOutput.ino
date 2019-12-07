int led = 10;         //Assign LED
int apin = A1;       //Assign the Potentiometer


void setup() {

  pinMode(led, OUTPUT);     //LED to OUTPUT mode
  pinMode(apin, INPUT);     //Potentiometer to INPUT mode
  Serial.begin(9600);       //Serial i/o

}

void loop() {

  int potVal = analogRead(apin) ;    //Read from potentiometer
  Serial.println(potVal);           //Print the potentiometer input to the seiral console
  analogWrite(led, potVal);         //Set LED to HIGH

  delay(potVal);                    //Use the potentiometer input as the delay for LED ON (for smoothening the blinking)

 
  
  
  
}
