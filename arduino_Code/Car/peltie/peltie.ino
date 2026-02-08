const int peltierPin = 6;   
const int buttonPin = 2;    

void setup() {
  pinMode(peltierPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Внутренний подтягивающий резистор
  digitalWrite(peltierPin, LOW);    
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    // Включить Пельтье
    digitalWrite(peltierPin, HIGH);
    Serial.println("Пельтье включено");
  } else {
    // Выключить Пельтье
    digitalWrite(peltierPin, LOW);
    Serial.println("Пельтье выключено");
  }

  delay(50); // Немного задержки для защиты от дребезга
}