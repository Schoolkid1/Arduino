
//pin aansluiten op A0
int Tempvalue = A0;

//float aanmaken
float Temperature;



void setup()
{
  pinMode(Tempvalue, INPUT);
  
  //monitor aanmaken
  Serial.begin(9600);
}

void loop()
{

 //bepalen wat je gaat uitlezen 
 Temperature = analogRead(Tempvalue);

  //waardes instellen binnen map functie
  float Temp = map(Temperature, 0, 1023, 0, 500);
  
  Serial.println(Temp);
  //delay om leesbaar te maken
  delay(5000);
  
}

