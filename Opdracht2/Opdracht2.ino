//Stroom naar led.
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}
//delays tussen knipperen (heen en terug).
void loop(){
  knipperrechts();
  knipperlinks();
}
  
//functie aanmaken
void knipperrechts() {
  //start loop
  digitalWrite(13, HIGH);
  				delay(100);
  digitalWrite(12, HIGH);
               delay(100);
  digitalWrite(11, HIGH);
  				delay(100);
  digitalWrite(10, HIGH);
  digitalWrite(13, LOW);
  				delay(100);
  digitalWrite(9, HIGH);
  digitalWrite(12, LOW);
  				delay(100);
  digitalWrite(8, HIGH);
  digitalWrite(11, LOW);
  				delay(100);
  digitalWrite(7, HIGH);
  digitalWrite(10, LOW);
  				delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(9, LOW);
  				delay(100);
  digitalWrite(8, LOW);
  				delay(100);
  digitalWrite(7, LOW);
               delay(100);
  digitalWrite(6, LOW);
  				delay(100);
}

//loop terrugdraaien
void knipperlinks() {  
digitalWrite(6, HIGH);
  				delay(100);
  digitalWrite(7, HIGH);
               delay(100);
  digitalWrite(8, HIGH);
  				delay(100);
  digitalWrite(9, HIGH);
  digitalWrite(6, LOW);
  				delay(100);
  digitalWrite(10, HIGH);
  digitalWrite(7, LOW);
  				delay(100);
  digitalWrite(11, HIGH);
  digitalWrite(8, LOW);
  				delay(100);
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  				delay(100);
  digitalWrite(13, HIGH);
  digitalWrite(10, LOW);
  				delay(100);
  digitalWrite(11, LOW);
  				delay(100);
  digitalWrite(12, LOW);
               delay(100);
  digitalWrite(13, LOW);
  				delay(100);
}