/*
  Simple NZ traffic light signal
 */
 
// Have three leds, using pins 12, 10 and 8, and connected to ground via a resistor
int ledRed = 12;
int ledAmber = 10;
int ledGreen = 8;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pins as an output.
  pinMode(ledRed, OUTPUT);     
  pinMode(ledAmber, OUTPUT);     
  pinMode(ledGreen, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  
  // RED ON
  // ======
  // Turn on red (HIGH is the voltage level)
  digitalWrite(ledAmber, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed, HIGH);
  // Red stays on for 10 seconds
  delay(10000);
 
  // GREEN ON
  // ========
  // Turn off red by making the voltage LOW, and immediately turn on green
  digitalWrite(ledRed, LOW); 
  digitalWrite(ledGreen, HIGH);
  // Stay on for 7 seconds
  delay(7000);
  
  // AMBER ON
  // ========
  // Turn off green and turn on amber 
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledAmber, HIGH);
  
  // Amber stays on for 3 seconds
  delay(3000);
}
