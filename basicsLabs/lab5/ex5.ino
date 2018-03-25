// Example 5: Set the brightness of LED to
// a brightness specified by the
// value of the analogue input
const int LED = 9;
int val = 0;
// the pin for the LED
// variable used to store the value
// coming from the sensor
void setup() {
pinMode(LED, OUTPUT); // LED is as an OUTPUT
// Note: Analogue pins are
// automatically set as inputs
}
void loop() {
val = analogRead(0); // read the value from
// the sensor
analogWrite(LED, val/4); // turn the LED on at
// the brightness set
// by the sensor
delay(10); // stop the program for
// some time
}
