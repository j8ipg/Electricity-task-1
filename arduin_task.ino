// Project: Control 3 LEDs using 3 Push Buttons
// Each button controls one LED

void setup()
{
  // Set button pins as INPUT
  pinMode(2, INPUT); // Button 1
  pinMode(3, INPUT); // Button 2
  pinMode(4, INPUT); // Button 3

  // Set LED pins as OUTPUT
  pinMode(5, OUTPUT); // LED 1
  pinMode(6, OUTPUT); // LED 2
  pinMode(7, OUTPUT); // LED 3
}

void loop()
{
  // Read button states and control corresponding LEDs

  if (digitalRead(2) == HIGH) {
    digitalWrite(5, HIGH); // Turn on LED 1
  } else {
    digitalWrite(5, LOW);  // Turn off LED 1
  }

  if (digitalRead(3) == HIGH) {
    digitalWrite(6, HIGH); // Turn on LED 2
  } else {
    digitalWrite(6, LOW);  // Turn off LED 2
  }

  if (digitalRead(4) == HIGH) {
    digitalWrite(7, HIGH); // Turn on LED 3
  } else {
    digitalWrite(7, LOW);  // Turn off LED 3
  }

  delay(10); // Small delay to improve simulation stability
}
