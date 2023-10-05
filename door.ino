const int doorsensorpin=13;
const int ledpin=3;
int doorstate;

void setup()
{
  Serial.begin(9600);
  pinMode(doorsensorpin,INPUT_PULLUP);
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  doorstate=digitalWrite(doorsensorpin);
  if (doorstate==HIGH)
  {
    Serial.println("The door is open.");
    digitalWrite(ledpin,HIGH);
    delay(1000);
  }
  else
  {
    Serial.println("The door is closed.");
    digitalWrite(ledpin,LOW);
    delay(1000);
  }
}
