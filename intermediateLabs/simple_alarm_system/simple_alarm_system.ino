#include <NewTone.h>
 
// Select which PWM-capable pins are to be used.
#define RED_PIN    3
#define GREEN_PIN   5
#define BLUE_PIN  6
#define pir 12 
#define ALARM 9
float sinVal;
int toneVal;
 
void setup(){
   
 //set pinModes for RGB strip
   pinMode(RED_PIN,OUTPUT);
   pinMode(BLUE_PIN,OUTPUT);
   pinMode(GREEN_PIN,OUTPUT);
   pinMode(pir,INPUT);
   
   pinMode(ALARM, OUTPUT);
 
   //reset lights
   analogWrite(RED_PIN,0);
   analogWrite(BLUE_PIN,0);
   analogWrite(RED_PIN,0);
 
  delay(5000);
Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.  
 
}
 
void loop(){

    if(digitalRead(pir)==HIGH){
      alarm();
    }
    else{
   color(0,0,255);
   digitalWrite(ALARM,LOW);

   }
}
 
void alarm(){
   color(255,0,0); //red
   delay(100);
   color(255,255,0); //yelow
   delay(100);
   
   for (int x=0; x<180; x++) {
    // convert degrees to radians then obtain sin value
    sinVal = (sin(x*(3.1412/180)));
    // generate a frequency from the sin value
    toneVal = 2000+(int(sinVal*1000));
    NewTone(ALARM, toneVal);
  }
}
 
//helper function enabling us to send a colour in one command
void color (unsigned char red, unsigned char green, unsigned char blue)     // the color generating function
{    
    analogWrite(RED_PIN, red);    
    analogWrite(BLUE_PIN, blue);
    analogWrite(GREEN_PIN, green);
}
