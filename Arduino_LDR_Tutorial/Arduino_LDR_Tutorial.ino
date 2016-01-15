/*
 * LDR Serial Demo Code
 * Author: Manish Kumar Sharma (mks2064)
 * Webpage: http://mkslive.com
 * 
 * Usage: A simple example on how to use the LDR sensor
 * 
 * Part Of: Arduino and Sensors - I - Using LDRs
 * http://mkslive.com/2016/01/15/chapter-1-working-with-ldr/
 */
 
int ldrPin = A5; // Set the input analog pin as A5
int lightValue = 0; // Initialization to store variable
int ledPin=13; //Using the default LED 13

//The setup portion
void setup() {
    Serial.begin(9600); //sets serial port for communication
    pinMode(ledPin,OUTPUT); //set ledPin mode to output
}

//The main program loop
void loop() {
    //Use analogRead() to read the analog value from the sensor pin or ldrPin
    lightValue = analogRead(ledPin);

    //Print the studied value to sensor
    Serial.println(lightValue); //prints the values coming from the sensor on the screen
    
    //Just for fun. If the intensity of the light is below certain threshold, then switch on LED.
    if(lightValue<700)
    {
      //Turn On LED
      digitalWrite(ledPin,HIGH);
    }
    else
    {
      //Turn off LED
      digitalWrite(ledPin,LOW);
    }

    //Use 100ms delay between each loop
    delay(100);
}
