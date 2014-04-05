/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int ledRed = 12;
int ledAmber = 10;
int ledGreen = 8;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledRed, OUTPUT);     
  pinMode(ledAmber, OUTPUT);     
  pinMode(ledGreen, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(ledRed, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000);               // wait for a second
  digitalWrite(ledRed, LOW);    // turn the LED off by making the voltage LOW
//  delay(10);               // wait for a second
//  delay(10);               // wait for a second
  digitalWrite(ledGreen, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);               // wait for a second
  digitalWrite(ledGreen, LOW);    // turn the LED off by making the voltage LOW
//  delay(10);               // wait for a second
  digitalWrite(ledAmber, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(ledAmber, LOW);    // turn the LED off by making the voltage LOW
}
