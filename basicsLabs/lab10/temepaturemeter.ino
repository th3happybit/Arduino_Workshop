const int Sensor = A0; 

void setup() {
pinMode(Sensor, INPUT);
Serial.begin(9600);
}

void loop() {

     float temp_reading=analogRead(Sensor);
     float temperature=temp_reading*(5.0/1023.0)*100;

     Serial.print("the temperature is :");
     Serial.println(temperature);
      
     
}
