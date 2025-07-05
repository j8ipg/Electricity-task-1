# Electricity-task-1
This project demonstrates a simple Arduino setup where three push buttons are used to individually control three LEDs. Each button toggles the state (ON/OFF) of a corresponding LED. This is a great beginner-friendly project to learn about digital input and output on Arduino.
Screenshots or Circuit Diagram:
}![Surprising Snicket](https://github.com/user-attachments/assets/090c50f3-5253-4e5c-b990-efcd7df9c9af)

cood used:

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
    digitalWrite(5, HIGH); // Turn on LED 1 if Button 1 is pressed
  } else {
    digitalWrite(5, LOW);  // Turn off LED 1
  }

  if (digitalRead(3) == HIGH) {
    digitalWrite(6, HIGH); // Turn on LED 2 if Button 2 is pressed
  } else {
    digitalWrite(6, LOW);  // Turn off LED 2
  }

  if (digitalRead(4) == HIGH) {
    digitalWrite(7, HIGH); // Turn on LED 3 if Button 3 is pressed
  } else {
    digitalWrite(7, LOW);  // Turn off LED 3
  }

  delay(10); // Small delay to improve simulation stability
}

Code Explanation
setup() sets pins 2, 3, 4 as inputs for the buttons, and pins 5, 6, 7 as outputs for the LEDs.

loop() continuously reads the state of each button:

If the button is pressed (HIGH), the corresponding LED is turned on.

If the button is not pressed, the LED is turned off.

A small delay(10) is added to reduce unnecessary CPU load in simulation.


