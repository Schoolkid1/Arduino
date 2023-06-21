//https://brightspace.adainforma.tk/lessons/inf/bp4_hwi_01/#54
//https://www.arduino.cc/reference/en/language/variables/constants/constants/
//https://docs.arduino.cc/built-in-examples/digital/Button

//Pinnummers declareren
const int LED = 11;
const int Pushbutton = 8;

int DRUKKNOP = 0;

int teller = 0;


void setup()
{
  //de in en output defineren
  pinMode(11, OUTPUT);
  pinMode(8, INPUT);
  //voor aanmaken println
  Serial.begin(9600);
}

void loop(){
  
    //de variabel met de knop associeren
    DRUKKNOP = digitalRead(Pushbutton);
 // functie aanroepen
  lichtaan(DRUKKNOP);
  lichtuit(DRUKKNOP);
  
}
 
  void lichtaan(int status){
    
  //wanneer teller oneven is gaat lamp aan
  if (status == HIGH){
  digitalWrite(LED, HIGH);
     //de teller bijhouden
    teller++;
    Serial.println(teller);
    
  	delay(300); //zodat de knop niet op hol slaat
      
  }
   
}
//wanneer de teller even is gaat het licht uit
 void lichtuit(int status){
   if (teller % 2 == 0){
     digitalWrite(LED, LOW);
   }
 }
     