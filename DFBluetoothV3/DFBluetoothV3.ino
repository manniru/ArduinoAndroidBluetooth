char incomingByte;  // incoming data
int  LED = 13;      // LED pin
void setup() {
  Serial.begin(9600); // initialization
  pinMode(LED, OUTPUT);} 
void loop() {
  if (Serial.available() > 0) {  // if the data came
    incomingByte = Serial.read(); // read byte
    if(incomingByte == '0') {
      Serial.println("incomingByte=0");
       digitalWrite(LED, LOW);  // if 1, switch LED Off
    }
    if(incomingByte == '1') {
      Serial.println("incomingByte=1");
       digitalWrite(LED, HIGH); // if 0, switch LED on
    }
  }
}

