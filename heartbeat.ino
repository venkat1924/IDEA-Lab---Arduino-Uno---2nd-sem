#include <LiquidCrystal_I2C.h>
#define USE_ARDUINO_INTERRUPTS true
#include <PulseSensorPlayground.h>
const int PulseWire = 0; // PulseSensor PURPLE WIRE connected to ANALOG PIN 0
const int LED13 = 13; // The on-board Arduino LED, close to PIN 13.
int Threshold = 550; // Determine which Signal to "count as a beat" and which to ignore.
LiquidCrystal_I2C lcd(0x27,16,2);
PulseSensorPlayground pulseSensor; // Creates an instance of the PulseSensorPlayground object called "pulseSensor"
void setup() {
 Serial.begin(9600); // For Serial Monitor
lcd.begin(20,4);
// Configure the PulseSensor object, by assigning our variables to it.
pulseSensor.analogInput(PulseWire);
pulseSensor.blinkOnPulse(LED13); //auto-magically blink Arduino's LED with heartbeat.
pulseSensor.setThreshold(Threshold);
 // Double-check the "pulseSensor" object was created and "began" seeing a signal.
if (pulseSensor.begin()) 
{
Serial.println("We created a pulseSensor Object !"); 
 }
}
 void loop() {
  lcd.init();
  lcd.backlight();
 int myBPM = pulseSensor.getBeatsPerMinute(); // Calls function on our pulseSensor object that returns BPM as an "int".
// "myBPM" hold this BPM value now.
if (pulseSensor.sawStartOfBeat()) { 
Serial.println("♥ A HeartBeat Happened ! ");
 Serial.print("BPM: "); 
Serial.println(myBPM); 
lcd.setCursor(0,0);
lcd.print("HeartBeat Happened !"); 
lcd.setCursor(0,1);
lcd.print("BPM: "); 
lcd.print(myBPM);
}
delay(20);  
}
