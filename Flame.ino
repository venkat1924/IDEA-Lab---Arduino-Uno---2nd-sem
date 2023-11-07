int Buzzer = 13;
int FlamePin = 2;
int Flame = HIGH;

void setup()
{
  Serial.begin(9600);
  pinMode(Buzzer, OUTPUT);
  pinMode(FlamePin, INPUT); 
}

void loop()
{
  Flame = digitalRead(FlamePin);
  if(Flame == HIGH)
  {
    Serial.print("HIGH FLAME");
    digitalWrite(Buzzer, HIGH);
  }
  else
  {
    Serial.println("NO FLAME");
    digitalWrite(Buzzer, LOW);
  }
}
