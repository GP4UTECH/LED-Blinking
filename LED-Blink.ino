// Basic LED Blink Code
void setup() {
  pinMode(4, OUTPUT); // Set digital pin 13 as output (usually connected to built-in LED)
}

void loop() {
  digitalWrite(4, HIGH); // Turn the LED on
  delay(1000);            // Wait for 1 second (1000 milliseconds)
  digitalWrite(4, LOW);  // Turn the LED off
  delay(1000);            // Wait for 1 second


}