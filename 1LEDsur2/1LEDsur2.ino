int pinLed1, pinLed2, pinLed3, pinLed4, pinLed5, pinLed6, pinLed7, pinLed8,pinLed9, pinLed10; //on peut déclarer plusieurs variables
void setup()
{
  //initialisation des variables
  pinLed1 = 1;
  pinLed2 = 2;
  pinLed3 = 3;
  pinLed4 = 4;
  pinLed5 = 5;
  pinLed6 = 6;
  pinLed7 = 7;
  pinLed8 = 8;
  pinLed9 = 9;
  pinLed10 = 10;
  //initialisation des modes
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  pinMode(pinLed5, OUTPUT);
  pinMode(pinLed6, OUTPUT);
  pinMode(pinLed7, OUTPUT);
  pinMode(pinLed8, OUTPUT);
  pinMode(pinLed9, OUTPUT);
  pinMode(pinLed10, OUTPUT);

  //mise à 0V de chaque pin
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, LOW);
  digitalWrite(pinLed4, LOW);
  digitalWrite(pinLed5, LOW);
  digitalWrite(pinLed6, LOW);
  digitalWrite(pinLed7, LOW);
  digitalWrite(pinLed8, LOW);
  digitalWrite(pinLed9, LOW);
  digitalWrite(pinLed10, LOW);
  
}
void loop()
{
  //1 Led allume sur 2
  digitalWrite(pinLed1, HIGH);
  delay(300);
  digitalWrite(pinLed2, LOW);
  delay(300);
  digitalWrite(pinLed3, HIGH);
  delay(300);
  digitalWrite(pinLed4, LOW);
  delay(300);
  digitalWrite(pinLed5, HIGH);
  delay(300);
  digitalWrite(pinLed6, LOW);
  delay(300);
  digitalWrite(pinLed7, HIGH);
  delay(300);
  digitalWrite(pinLed8, LOW);
  delay(300);
  digitalWrite(pinLed9, HIGH);
  delay(300);
  digitalWrite(pinLed10, LOW);
  delay(300);
    //on éteint tout
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, LOW);
  digitalWrite(pinLed4, LOW);
  digitalWrite(pinLed5, LOW);
  digitalWrite(pinLed6, LOW);
  digitalWrite(pinLed7, LOW);
  digitalWrite(pinLed8, LOW);
  digitalWrite(pinLed9, LOW);
  digitalWrite(pinLed10, LOW);
  delay(300);
 
}
