const int motorPin1 = 8; // Вперед/назад (Мотор 1)
const int motorPin2 = 9;
const int motorPin3 = 10; // Вперед/назад (Мотор 2)
const int motorPin4 = 11;

const int turnDuration = 1500;
const int moveForwardTime = 1000;
const int pauseTime = 500;

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
}

void loop() {
  // 3 раза пройти по восьмерке
  for (int i = 0; i < 3; i++) {
    moveAlongEight();
    delay(pauseTime);
  }
}

// Движение по восьмерке: сделать две петли
void moveAlongEight() {
  // Первая петля — вперед, поворот налево
  moveForward(moveForwardTime);
  turnLeft(turnDuration);
  // Вторая петля — вперед, поворот направо
  moveForward(moveForwardTime);
  turnRight(turnDuration);
}

void moveForward(int duration) {
  
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay(duration);
  stopMotors();
}

void turnLeft(int duration) {

  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay(duration);
  stopMotors();
}

void turnRight(int duration) {

  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  delay(duration);
  stopMotors();
}

void stopMotors() {

  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
}