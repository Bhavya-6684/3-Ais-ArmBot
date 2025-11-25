#include <Servo.h>

Servo s1, s2, s3;

const int pin1 = 9;
const int pin2 = 10;
const int pin3 = 11;

const int STEP_DELAY = 15;   // time between 1-degree steps (ms)

// current and target positions
int pos1 = 90, pos2 = 90, pos3 = 90;
int target1 = 90, target2 = 90, target3 = 90;

String input = "";
unsigned long lastStepTime = 0;

void setup() {
  Serial.begin(115200);   // must match your web code

  s1.attach(pin1);
  s2.attach(pin2);
  s3.attach(pin3);

  s1.write(pos1);
  s2.write(pos2);
  s3.write(pos3);

  Serial.println("READY FOR WEB CONTROLLER");
}

void readSerialCommand() {

  while (Serial.available()) {
    char c = Serial.read();

    if (c == '\n') {
      input.trim();

      if (input.startsWith("j,")) {
        int a1, a2, a3;

        int c1 = input.indexOf(',', 2);
        int c2 = input.indexOf(',', c1 + 1);

        if (c1 > 0 && c2 > 0) {
          a1 = input.substring(2, c1).toInt();
          a2 = input.substring(c1 + 1, c2).toInt();
          a3 = input.substring(c2 + 1).toInt();

          // limit angles
          target1 = constrain(a1, 0, 180);
          target2 = constrain(a2, 0, 180);
          target3 = constrain(a3, 0, 180);

          Serial.println("OK");
        }
      }

      input = "";   // clear buffer
    } else {
      input += c;
    }
  }
}

void moveServosSmooth() {
  unsigned long now = millis();
  if (now - lastStepTime < STEP_DELAY) return; // wait until next step
  lastStepTime = now;

  bool anyMoving = false;

  // servo 1
  if (pos1 < target1) { pos1++; anyMoving = true; }
  else if (pos1 > target1) { pos1--; anyMoving = true; }

  // servo 2
  if (pos2 < target2) { pos2++; anyMoving = true; }
  else if (pos2 > target2) { pos2--; anyMoving = true; }

  // servo 3
  if (pos3 < target3) { pos3++; anyMoving = true; }
  else if (pos3 > target3) { pos3--; anyMoving = true; }

  if (anyMoving) {
    s1.write(pos1);
    s2.write(pos2);
    s3.write(pos3);
  }
}

void loop() {
  // 1) read command and update targets
  readSerialCommand();

  // 2) move all servos together towards their targets
  moveServosSmooth();
}