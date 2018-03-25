int lightsensorPin = 0;
int headlightsPin1 = 9;
int headlightsPin2 = 10;
int switchingthreshold= 300;
int wait = 1000;
long timer = 0;
int value;

void setup(){
  //Serial.begin(9600);
  pinMode(headlightsPin1,OUTPUT);
  pinMode(headlightsPin2,OUTPUT);
}

void loop(){
  value = analogRead(lightsensorPin);
  //Serial.println(value);
  
  if (value<switchingthreshold){
    timer=millis();
    digitalWrite(headlightsPin1, HIGH);
    digitalWrite(headlightsPin2, HIGH);
  } 
  else if (millis()>wait+timer){
    digitalWrite(headlightsPin1, LOW);
    digitalWrite(headlightsPin2, LOW);    
  }
  
  delay(15); 
}
