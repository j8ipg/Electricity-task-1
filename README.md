# Electricity-task-1

# 🔌 Arduino Project: 3 LEDs with 3 Push Buttons

## 1. Project Title
**Controlling LEDs with Push Buttons using Arduino**

This project allows the control of three individual LEDs using three push buttons with an Arduino Uno. Each button turns on a corresponding LED when pressed and turns it off when released.

## 2. Description
This beginner-level Arduino project demonstrates the use of digital input (buttons) and digital output (LEDs). The circuit is designed to help learners understand basic wiring and logic in embedded systems, especially useful for students and hobbyists starting with Arduino.
Screenshots or Circuit Diagram:

![Surprising Snicket](https://github.com/user-attachments/assets/090c50f3-5253-4e5c-b990-efcd7df9c9af)

## 3. Purpose
- Learn how to set up digital input/output on Arduino.
- Practice reading button inputs and controlling output devices.
- Understand the behavior of pull-down resistors.
- Build a working interactive circuit with real-time feedback.

## 4. Requirements
- Arduino Uno (or compatible)
- USB cable for programming
- Arduino IDE (installed on your computer)
- Breadboard for wiring
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

> **Note:** Each button should be connected with a 10kΩ pull-down resistor to GND.  
> LEDs are connected in series with 220Ω resistors to limit current.

## 7. How It Works
Each time a push button is pressed, the Arduino reads a HIGH signal on the corresponding pin. It responds by sending a HIGH output to the connected LED pin, lighting up the LED. Releasing the button sends a LOW signal, turning off the LED. This logic provides instant feedback for button interaction.

## 8. How to Upload
1. Open the Arduino IDE.
2. Connect your Arduino Uno to your computer via USB.
3. Copy and paste the code from section 9 into a new sketch.
4. Select the correct board and COM port from the **Tools** menu.
5. Click the **Upload** button.
6. Press each button to see the respective LED turn ON/OFF.

## 9. Arduino Code

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






