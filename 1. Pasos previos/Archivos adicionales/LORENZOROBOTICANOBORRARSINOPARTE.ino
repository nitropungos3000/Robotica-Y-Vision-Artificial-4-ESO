int pot = A0;

int LED1 = 3;
int LED2 = 5;
int LED3 = 6;
int LED4 = 9;
int LED5 = 11;

int dutycycle1;
int dutycycle2;
int dutycycle3;
int dutycycle4;
int dutycycle5;

int valorpot;

void setup() {
  Serial.begin(9600);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop() {
  valorpot = analogRead(pot);

  Serial.println(valorpot);

  if (valorpot == 0) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
  }

  if (valorpot >= 1 && valorpot < 200) {
    dutycycle1 = map(valorpot, 1, 199, 0, 255);
    analogWrite(LED1, dutycycle1);

    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
  }

  if (valorpot >= 200) {
    analogWrite(LED1, dutycycle1);
  }

  delay(100);

    if (valorpot >= 201 && valorpot < 450) {
    dutycycle2 = map(valorpot, 201, 449, 0, 255);
    analogWrite(LED2, dutycycle2);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
  }

  if (valorpot >= 450) {
    analogWrite(LED2, dutycycle2);
  }

  delay(100);

    if (valorpot >= 450 && valorpot < 700) {
    dutycycle3 = map(valorpot, 450, 699, 0, 255);
    analogWrite(LED3, dutycycle3);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
  }

  if (valorpot >= 700) {
    analogWrite(LED3, dutycycle3);
  }

  delay(100);

    if (valorpot >= 700 && valorpot < 850) {
    dutycycle4 = map(valorpot, 700, 849, 0, 255);
    analogWrite(LED4, dutycycle4);
    digitalWrite(LED5, LOW);
  }

  if (valorpot >= 850) {
    analogWrite(LED4, dutycycle4);
  }

  delay(100);

    if (valorpot >= 850 && valorpot < 1023) {
    dutycycle5 = map(valorpot, 850, 1022 , 0, 255);
    analogWrite(LED5, dutycycle5);
  }

  if (valorpot >= 1023) {
    analogWrite(LED5, dutycycle5);
  }

  delay(100);
}
