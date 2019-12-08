int led = 10;         //Assign LED
int apin = A1;       //Assign the Potentiometer


void setup() {

  pinMode(led, OUTPUT);     //LED to OUTPUT mode
  pinMode(apin, INPUT);     //Potentiometer to INPUT mode

  //This is where we initialize the seiral monitor
  Serial.begin(9600);       //9600 is the baud rate

}

void loop() {

  float potVal = analogRead(apin) / 4 ;                //Read from potentiometer
  float ratio = potVal/255.0;                          //When finding a decimal value, ensure that everything on both operands are in float
  Serial.print("ratio :");
  Serial.println(ratio);
  float brightness;
  brightness = ratio * 100;
  Serial.print("LED Brightness : ");
  Serial.print(brightness);
  Serial.print("%  ");
  Serial.print("Potentiometer reading : ");           //Used to print to the serial console
  Serial.println(potVal);
  
  analogWrite(led, potVal);                          //Set LED to HIGH      
  delay(potVal);                                     //Use the potentiometer input as the delay for LED ON (for smoothening the blinking)

 
  
  
  
}
