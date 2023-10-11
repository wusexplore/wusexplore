const int greenLEDPin = 9;
const int redLEDPin = 11;
const int blueLEDPin = 10;

// who even uses double slash-stars.
/* actually,

slash-star is for multi-line or block comments

*/

const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

// useful: these are the RGB values or whatever
int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redSensorValue = 0;
int  greenSensorValue = 0;
int blueSensorValue = 0;


void setup() {
  Serial.begin(9600);

  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:

}
