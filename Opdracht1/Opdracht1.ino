//https://brightspace.adainforma.tk/lessons/inf/bp4_hwi_01/#43

//Stroom naar led.
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
//loop gecreëerd zodat het lichtje aan en uit blijft gaan.
void loop()

{
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000); 
  //delays tussen knipperen (om en om).
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(1000); 
}