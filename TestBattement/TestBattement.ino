int  pinLed[11] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; //déclaration du tableau
volatile int sensorValue;
volatile int btm;
volatile int seuil = 600;
                           

void setup()
{
  Serial.begin(9600);
  //Boucle d'initialisation des modes et mise à 0V
  for (int i = 0; i < 11; i++) // i va nous servir pour parcourir le tableau
  {
    pinMode(pinLed[i], OUTPUT); //on utilise les valeurs du tableau
    digitalWrite(pinLed[i], LOW); // l'une après l'autre
  }

}
void loop(){
  sensorValue = analogRead(A0);
  if(sensorValue < .9*1023)
  {
    btm = 1;
 for (int i = 0; i < 11; i++)
{
  digitalWrite(pinLed[i],HIGH);
}
  }
  
else{
    btm = 0;
for (int i = 0; i < 11; i++)
{
  digitalWrite(pinLed[i],LOW);
}
}
  Serial.println(btm);
}
