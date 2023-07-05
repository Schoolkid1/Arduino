//https://brightspace.adainforma.tk/lessons/inf/bp4_hwi_02/#52

//aansluiten op de pinnen
int Rood = 11;
int Blauw = 10;
int Groen = 9;

void setup()
{
  pinMode(Rood, OUTPUT);
  pinMode(Groen, OUTPUT);
  pinMode(Blauw, OUTPUT);
}

//nested for-loop aanmaken
void loop()
{
  for(int roodVal=0; roodVal<=255; roodVal++)
  {
    for(int blauwVal=0; blauwVal<=255; blauwVal++)
    {
      for(int groenVal=0; groenVal<=255; groenVal++)
      {
        analogWrite(Rood, roodVal);
        analogWrite(Blauw, blauwVal);
        analogWrite(Groen, groenVal);
        //delay zo laag mogelijk  	
  		delay(1);
      }
    }
  }
  
}