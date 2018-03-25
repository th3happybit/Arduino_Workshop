// Example 7 : read a value from Serial port 
//and prints the received data to the Serial Monitor.
int incomingByte=0;   // for incoming serial data
char c;
void setup() {
        Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop() {

        // send data only when you receive data:
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = ((byte)Serial.read());
                // say what you got:
                Serial.print("I received: ");
                Serial.println(incomingByte,HEX);
        }
}
