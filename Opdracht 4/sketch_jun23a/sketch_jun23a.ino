//https://brightspace.adainforma.tk/lessons/inf/bp4_hwi_02/
//https://docs.arduino.cc/built-in-examples/basics/AnalogReadSerial
//https://www.arduino.cc/reference/en/language/functions/math/map/

//potentionmeter aansluiten op A5
const int potPin = A5;

//Led's aansluiten
const int ledPin1 = 13;
const int ledPin2 = 12;
const int ledPin3 = 11;
const int ledPin4 = 10;
const int ledPin5 = 9;
const int ledPin6 = 8;
const int ledPin7 = 7;

//startwaarde van de potentiometer bepalen
int potentiowaarde = 0;



void setup()
{
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);
  pinMode (ledPin3, OUTPUT);
  pinMode (ledPin4, OUTPUT);
  pinMode (ledPin5, OUTPUT);
  pinMode (ledPin6, OUTPUT);
  pinMode (ledPin7, OUTPUT);
  
  //potentiometer uitlezen
  Serial.begin(9600);

}

void loop()
{
  // value van potentiometer ophalen
  int val = analogRead(potPin);
 
  //map functie aanmaken
  int draaiknop = map(val, 0, 950, 7, 14);
   
  //monitoren potentiometer waarde
  Serial.println(draaiknop);
  
  //functie aanroepen
  aansturing(draaiknop);
}

//aansturingsfunctie aanmaken
void aansturing(int mapval)
{for (int led = 7; led <= 13; led++){
  if (led >= mapval){
  digitalWrite(led, LOW);
  } 
  else {
  digitalWrite(led, HIGH);
  }
} 

}
