//* SpaceShipInterface
Program is from the Arduino Project Book
Base program for test and code modification *//


int switchState = 0;

void setup() {
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(2, INPUT);
}

void loop() {
  switchState = digitalRead(2);

  if (switchState == LOW) {
    // the button is not pressed
    digitalWrite(3, HIGH); // green LED
    digitalWrite(4, LOW); // red LED
    digitalWrite(5, LOW); // red LED
  }
    else{ // the button is pressed
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrtie(5, HIGH);
    
    delay(250); // wait for a quarter second
    // toggle the LEDs
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    delay(250) // wait for a quarter second
    }

} // go back to the begining of teh loop

