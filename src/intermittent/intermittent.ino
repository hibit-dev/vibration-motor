#define MOTOR_PIN 3

void setup()
{
  pinMode(MOTOR_PIN, OUTPUT);
}

void loop()
{
  // Turn vibration ON
  digitalWrite(MOTOR_PIN, HIGH);
  delay(1000);

  // Turn vibration OFF
  digitalWrite(MOTOR_PIN, LOW);
  delay(1000);
}
