

int Tempvalue = A0;
float Temperature;



void setup()
{
  pinMode(Tempvalue, INPUT);
  Serial.begin(9600);
}

void loop()
{
  
 Temperature = analogRead(Tempvalue);
  
  float Temp = map(Temperature, 0, 1023, 0, 500);
  
  Serial.println(Temp);
  delay(5000);
  
}

