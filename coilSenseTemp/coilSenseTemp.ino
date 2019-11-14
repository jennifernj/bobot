// untested!!!

int LEN = 9;
int RPWM = 6;
int REN = 10;
int timeA = 5000; //duration to run
int tempPin = 5; 

void setup() {
  Serial.begin(9600);
  pinMode(RPWM, OUTPUT);
  pinMode(LEN, OUTPUT);
  pinMode(REN, OUTPUT);
  digitalWrite(LEN, HIGH);
  digitalWrite(REN, HIGH);
}

void heat() {
  digitalWrite(RPWM, HIGH);
  delay(timeA);
  digitalWrite(RPWM, LOW);
  delay(timeA);
}

float tempCelsius() {
  int rawvoltage = analogRead(tempPin);
  float volts = rawvoltage * 0.004882814;
  float celsiustemp = 100.0 * volts - 50;
}

void loop() {
  if (tempCelsius() < 25) {
    heat();
  }
  delay(6000);
}
