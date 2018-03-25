// Example 7 : reading an analog value and prints the result to the Serial Monitor


void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.print("the val is ");
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
}
