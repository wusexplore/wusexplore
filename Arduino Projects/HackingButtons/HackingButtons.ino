const int optoPin = 2;

void setup() {
  printMode(optoPin, OUTPUT);
 }

void loop() {
  digitalWrite(optoPin, HIGH);
  delay(15);
  digitalWrite(optoPin, LOW); 
  delay(21000);
}
