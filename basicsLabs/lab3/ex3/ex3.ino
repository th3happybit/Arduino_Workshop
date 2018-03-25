// Example 3: Turn on LED when the button is pressed
const int LED = 13;
// the pin for the LED
const int BUTTON = 7; // the input pin where the
// pushbutton is connected
int val = 0;
// val will be used to store the state
// of the input pin
void setup() {
pinMode(LED, OUTPUT);
// tell Arduino LED is an output
pinMode(BUTTON, INPUT); // and BUTTON is an input
}
void loop() {
val = digitalRead(BUTTON); // read input value and store it
// check if the input is HIGH (button pressed)
if (val == 1) {
digitalWrite(LED, HIGH); // turn LED ON
} else {
digitalWrite(LED, LOW);
}
}
