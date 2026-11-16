// define led according to pin diagram in article
// OOK sign number for User 1 - 10101
const int greenLed4 = 4;

void setup() {
  // initialize digital pin led as an output
  pinMode(greenLed4, OUTPUT);
}

void loop() {
       // 0 turn off the Red Led 
    digitalWrite(greenLed4, HIGH);   // 1  turns on the Green LED
    delayMicroseconds(166);                
    digitalWrite(greenLed4, LOW);    // 0  turns off the Green LED
    delayMicroseconds(166);
    digitalWrite(greenLed4, LOW);   // 1  turns on the Green LED
    delayMicroseconds(166);                  
    digitalWrite(greenLed4, HIGH);  // 0  turns off the Green LED
    delayMicroseconds(166);
}