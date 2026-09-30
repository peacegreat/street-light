// Define pin numbers
const int lightSensorPin = 2; // Light sensor digital pin
const int ledPin = 9;          // LED digital pin

void setup() {
  pinMode(lightSensorPin, INPUT); // Set light sensor pin as input
  pinMode(ledPin, OUTPUT);         // Set LED pin as output
  Serial.begin(9600);              // Initialize serial communication
}

void loop() {
  int lightState = digitalRead(lightSensorPin); // Read light sensor digital value
  Serial.println(lightState);                    // Print the value to Serial Monitor

  // If light state is LOW (dark), turn on the LED
  if (lightState == LOW) {
    digitalWrite(ledPin, LOW); // Turn on LED
  } else {
    digitalWrite(ledPin, HIGH);  // Turn off LED
  }

  delay(1000); // Wait for a second before reading again
}
