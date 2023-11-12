const int ldrpin=A0;
const int ledpin=2;
int ldrstatus;

void setup()
{
  Serial.begin(9600);
  pinMode(ldrpin,INPUT);
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  ldrstatus=analogRead(ldrpin);

  if (ldrstatus <=200)
  {
    digitalWrite(ledpin, LOW);
    Serial.print("It's BRIGHT, turn off the LED");
    Serial.println(ldrstatus);
  }
  else
  {
    digitalWrite(ledpin, HIGH);
    Serial.print("It's DARK, turn on the LED");
    Serial.println(ldrstatus);
  }
}
