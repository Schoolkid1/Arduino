//Stroom naar led.
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
//deleys tussen knipperen (om en om).
void loop()
{
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}