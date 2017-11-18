int  pinLed[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,  10};
int i;
void setup()
{

for (int i = 0; i < 10; i++)
pinMode(pinLed[i], OUTPUT);
digitalWrite(pinLed[i], LOW);
}

void loop()
{
for (int i = 0; i < 10; i++)
{
digitalWrite(pinLed[i], HIGH);
delay(250);digitalWrite(pinLed[i], LOW);
delay(250);
}
}