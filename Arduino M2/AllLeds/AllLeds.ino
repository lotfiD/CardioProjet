int  pinLed[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,  10}; //déclaration du tableau
                           

void setup()
{
  //Boucle d'initialisation des modes et mise à 0V
  for (int i = 0; i < 10; i++) // i va nous servir pour parcourir le tableau
  {
    pinMode(pinLed[i], OUTPUT); //on utilise les valeurs du tableau
    digitalWrite(pinLed[i], LOW); // l'une après l'autre
  }

}
void loop(){
 for (int i = 0; i < 10; i++)
{
  digitalWrite(pinLed[i],HIGH);
}

for (int i = 0; i < 10; i++)
{
  digitalWrite(pinLed[i],LOW);
}

}

 
