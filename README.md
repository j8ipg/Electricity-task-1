# Electricity-task-1
 This project demonstrates a simple Arduino setup where three push buttons are used to individually control three LEDs. Each button toggles the state (ON/OFF) of a corresponding LED. This is a great beginner-friendly project to learn about digital input and output on Arduino.
// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(5, OUTPUT);
  pinMode(3, INPUT);
  pinMode(6, OUTPUT);
  pinMode(4, INPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  if (digitalRead(2) == HIGH) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  if (digitalRead(3) == HIGH) {
    digitalWrite(6, HIGH);
  } else {
    digitalWrite(6, LOW);
  }
  if (digitalRead(4) == HIGH) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}![Surprising Snicket](https://github.com/user-attachments/assets/090c50f3-5253-4e5c-b990-efcd7df9c9af)
