volatile int sensorValue;
volatile int btm;
volatile int seuil = 600;

void setup() {
  Serial.begin(9600);
}

void loop(){
  sensorValue = analogRead(A0);
  if(sensorValue < .9*1023)
  {
    btm = 1;
  }
  else{
    btm = 0;
  }
  Serial.println(btm);
}




