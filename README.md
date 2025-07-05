# Electricity-task-1
# 🔌 Arduino Project: 3 LEDs with 3 Push Buttons

## 1. Project Title
**Controlling LEDs with Push Buttons using Arduino**

This project focuses on building a basic circuit using an Arduino Uno where three push buttons are each assigned to control one LED. The goal is to demonstrate digital input (from buttons) and digital output (to LEDs) — a fundamental concept in Arduino programming.

## 2. Description
This beginner-friendly project helps you understand how to read input signals from physical buttons and use those signals to control external devices — in this case, LEDs. When a button is pressed, its corresponding LED lights up. Once the button is released, the LED turns off. The circuit and code are simple, making this a great entry point into Arduino and electronics.

Screenshots or Circuit Diagram:

![Surprising Snicket](https://github.com/user-attachments/assets/090c50f3-5253-4e5c-b990-efcd7df9c9af)

## 3. Purpose
The main goal of this project is to:
- Learn how to set up digital inputs and outputs on an Arduino.
- Understand how buttons and LEDs interact through code and hardware.
- Gain hands-on experience wiring simple components on a breadboard.
- Build confidence in uploading and running Arduino sketches.

## 4. Requirements
- Arduino Uno (or compatible)
- USB cable
- Arduino IDE (installed on your PC)
- Breadboard
- Jumper wires

## 5. Components
| Component                | Quantity |
|-------------------------|----------|
| Arduino Uno             | 1        |
| Push Buttons            | 3        |
| LEDs (any color)        | 3        |
| 220Ω Resistors (for LEDs) | 3      |
| 10kΩ Resistors (for buttons) | 3   |
| Breadboard + Jumper wires | 1 set  |

## 6. Circuit Connections

| Button | Arduino Pin | LED | Arduino Pin |
|--------|-------------|-----|-------------|
| Button 1 | D2         | LED 1 | D5        |
| Button 2 | D3         | LED 2 | D6        |
| Button 3 | D4         | LED 3 | D7        |

> **Note:** Each button is connected to GND through a 10kΩ pull-down resistor.  
> LEDs are connected in series with 220Ω resistors to protect them from excess current.

## 7. Arduino Code

```cpp
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

Screenshots or Circuit Diagram:

![Surprising Snicket](https://github.com/user-attachments/assets/090c50f3-5253-4e5c-b990-efcd7df9c9af)

Code Explanation:

1-setup() sets pins 2, 3, 4 as inputs for the buttons, and pins 5, 6, 7 as outputs for the LEDs.


2-loop() continuously reads the state of each button:


3-If the button is pressed (HIGH), the corresponding LED is turned on.


4-If the button is not pressed, the LED is turned off.


5-A small delay(10) is added to reduce unnecessary CPU load in simulation.



