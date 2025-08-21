const int greenLedPin = 9;
const int redLedPin = 11;
const int blueLedPin = 10;

const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;


void setup() {
  Serial.begin(9600);

  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
}

void loop() {
  redSensorValue = analogRead(redSensorPin);
  delay(5);

  Serial.print("Raw Sensor Values \t: Red: ");
  Serial.print(redSensorValue);

  greenSensorValue = analogRead(greenSensorPin);
  delay(5);

  Serial.print("\t Green: ");
  Serial.print(greenSensorValue);
  
  blueSensorValue = analogRead(blueSensorPin);

  Serial.print("\t Blue: ");
  Serial.println(blueSensorValue);

  redValue = redSensorValue/4;
  Serial.print("Mapped Sensor Values \t Red: ");
  Serial.print(redValue);

  greenValue = greenSensorValue/4;
  Serial.print("\t Green: ");
  Serial.print(greenValue);

  blueValue = blueSensorValue/4;
  Serial.print("\t Blue: ");
  Serial.println(blueValue);

  analogWrite(redLedPin, redValue);
  analogWrite(greenLedPin, greenValue);
  analogWrite(blueLedPin, blueValue);
}
