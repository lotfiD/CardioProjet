int pinLed1, pinLed2, pinLed3, pinLed4, pinLed5, pinLed6, pinLed7, pinLed8,pinLed9, pinLed10; //on peut déclarer plusieurs variables
int n=3;
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
  digitalWrite(n, LOW);

  
}
void loop()
{
  //1 Led allume
  digitalWrite(n, HIGH);
  delay(300);

    //on éteint 1
  digitalWrite(n, LOW);
  delay(300);
 
}

