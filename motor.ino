#define IN1 9
#define IN2 10
#define IN3 11
#define IN4 12
#define IN5 6
#define IN6 13
#define IN7 5
#define IN8 4

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);
  pinMode(IN7, OUTPUT);
  pinMode(IN8, OUTPUT);
}

void loop() {
  // Motor A forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(2000);

  // MOtor A backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(2000);

  // Motor B forward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(2000);

  // Motor B backward
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(2000);

  // Motor C forward
  digitalWrite(IN5, HIGH);
  digitalWrite(IN6, LOW);
  delay(2000);

  // Motor C backward
  digitalWrite(IN5, LOW);
  digitalWrite(IN6, HIGH);
  delay(2000);

  // Motor D forward
  digitalWrite(IN7, HIGH);
  digitalWrite(IN8, LOW);
  delay(2000);

  // Motor D backward
  digitalWrite(IN7, LOW);
  digitalWrite(IN8, HIGH);
  delay(2000);

  // Halt all
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  digitalWrite(IN5, HIGH);
  digitalWrite(IN6, HIGH);
  digitalWrite(IN7, HIGH);
  digitalWrite(IN8, HIGH);
  delay(1000);
}
