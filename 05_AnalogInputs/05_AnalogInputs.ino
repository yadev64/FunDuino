int led = 13;         //Assign LED
int apin = A1;       //Assign the Potentiometer


void setup() {

  pinMode(led, OUTPUT);     //LED to OUTPUT mode
  pinMode(apin, INPUT);     //Potentiometer to INPUT mode
  Serial.begin(9600);       //Serial i/o

}

void loop() {

  int potVal = analogRead(apin);    //Read from potentiometer
  Serial.println(potVal);           //Print the potentiometer input to the seiral console
  digitalWrite(led, HIGH);          //Set LED to HIGH

  delay(potVal);                    //Use the potentiometer input as the delay for LED ON

  digitalWrite(led, LOW);           //Set LED to LOW
  potVal = analogRead(apin);        //Read from potentiometer
  Serial.println(potVal);           //Print the potentiometer input to the seiral console

  delay(potVal);                    //Use the potentiometer input as the delay for LED ON
  
  
}
