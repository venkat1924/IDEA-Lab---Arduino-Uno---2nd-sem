const int touchsensorpin=2;
const int ledpin=3;
void setup()
{
  Serial.begin(9600);
pinMode(touchsensorpin,INPUT);
pinMode(ledpin,OUTPUT);
}

void loop()
{
  int touchstate=digitalRead(touchsensorpin);
  if (touchstate=HIGH)
  {
    Serial.println("The sensor is being touched.");
    digitalWrite(ledpin,HIGH);
    delay(1000);
  }
  else
  {
    if (touchstate=LOW)
    {
      Serial.println("The sensor is untouched");
      digitalWrite(ledpin,LOW);
      delay(1000);
    }
  }
}


