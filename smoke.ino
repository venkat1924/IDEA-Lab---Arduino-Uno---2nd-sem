int redled=12;
int greenled=11;
int buzzer=10;
int smoke=A5;
int thresh=150;

void setup()
{
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  pinMode(buzzer, OUTPUT);
pinmode(smoke,INPUT);
}

void loop()
{
  int analogsensor=analogRead(smoke);
  Serial.print("Pin A0");
  Serial.println(analogsensor);
  if (analogsensor>thresh)
{
digitalWrite(redled, HIGH);
digitalWrite(greenled,LOW);
  tone(buzzer, 1000, 200);
}
else
{
digitalWrite(redled, LOW);
digitalWrite(greenled,HIGH);
noTone(buzzer);
}

delay(100);
}
