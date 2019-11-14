// https://www.instructables.com/id/How-to-use-the-TMP36-temp-sensor-Arduino-Tutorial/

int analog_no = 5 ;// define A5 as input signal pin
void setup() {
  Serial.begin(9600);
}

void loop() {
  int rawvoltage = analogRead(analog_no);
  float volts = rawvoltage * 0.004882814;
  float celsiustemp = 100.0 * volts - 50;
  float fahrenheittemp = celsiustemp * 9.0/5.0 + 32.0;
  Serial.print(fahrenheittemp);
  Serial.println("Fahrenheit");
  Serial.print(celsiustemp);
  Serial.println("Celsius");
  Serial.println("----------");
  delay(3000);

}
