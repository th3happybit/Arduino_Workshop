/*

  Sensing the Temperature with the LM35
  Fritzing.org
  
  This script will output the sensed temperature of the LM35 from 20 to 32°C by LEDs.
  
  inspired by
  ladyada http://www.ladyada.net/learn/sensors/tmp36.html
  pscmpf http://pscmpf.blogspot.com/2008/12/arduino-lm35-sensor.html
  
*/

float temperature;                        // stores the temperature
int sensorPin = 0;                        // pin where the sensor is connected to
int startTemp=20;                         // the start temperature > at this temperature, no LED will light up

void setup()
{
  Serial.begin(9600);                     // initialisation of the serial connection
  for (int i=2;i<8; i++){                // output channels from 2 to 7
    pinMode(i,OUTPUT);                    // pin is a output
  }
}

void loop()
{
  temperature = analogRead(sensorPin);    // reading analog sensor value
  temperature = temperature*0.488;        // correcting to °C 

  for (int i=0;i<8; i++){
    if (temperature>((i*2)+startTemp)){       // switch LED on, if temperature is higher than starttemp + (LED number*2)
      digitalWrite(i,HIGH);
    } 
    else {
      digitalWrite(i,LOW);                // else, switch it off
    }
  }

  Serial.print(temperature);Serial.println(" °C");  // send the temperarue to the serial monitor
  delay(500);                             // just wait a little
}

