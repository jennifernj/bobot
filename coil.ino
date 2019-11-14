int LEN = 9;
int RPWM = 6;
int REN = 10;
int timeA = 5000;      //duration to run
void setup() {
  // put your setup code here, to run once:
pinMode(RPWM, OUTPUT);
pinMode(LEN, OUTPUT);
pinMode(REN, OUTPUT);
digitalWrite(LEN, HIGH);
digitalWrite(REN, HIGH);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(RPWM, HIGH);
delay(timeA);
digitalWrite(RPWM, LOW);
delay(timeA);
}
