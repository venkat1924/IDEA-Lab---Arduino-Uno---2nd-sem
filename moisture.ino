int sensorpin=A0;
int outputvalue,moisture_percentage;

void setup()
{
  Serial.begin(9600);
  Serial.println("Reading from the sensor");
delay(2000)
  }

void loop()
{
  outputvalue=analogRead(sensorpin);
moisture_percentage = ( 100 - ( (outputvalue/1023.00) * 100 ) );
Serial.print("Moisture Percentage = ");
  Serial.print(moisture_percentage);
  Serial.print("%\n\n");
  delay(1000);
}
