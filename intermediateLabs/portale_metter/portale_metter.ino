#include <LiquidCrystal.h>
/*The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 */
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
const int trigPin = 10;
const int echoPin = 9;
const int led = 13;


void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  lcd.begin(16, 2);
  lcd.print ("Ultrasonic ");
  lcd.setCursor(0, 1);
  lcd.print ("Range Meter");
  delay (5000);
    
}
long duration, r;
float distance;

void loop()
{
  lcd.clear();
  lcd.print("Distance in cm");
    
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  long r = 3.4 * duration / 2;     
  float distance = r / 100.00;
  
  lcd.setCursor(0, 1);
  lcd.print(distance);
  delay (300);

  
 
 if(distance<10)
  {
    digitalWrite(led,HIGH);
  }
 else
  {
    digitalWrite(led,LOW);
  }
  
 delay(300);
}
