// RGB LED Pins / Pines del LED RGB
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

// Potentiometer Pins / Pines de los potenciómetros
int redPotPin = A0;
int greenPotPin = A1;
int bluePotPin = A2;

void setup() {
  // Configure RGB LED pins as outputs / Configure RGB LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Read potentiometer values / Lee los valores de los potenciómetros
  int redValue = analogRead(redPotPin);
  int greenValue = analogRead(greenPotPin);
  int blueValue = analogRead(bluePotPin);

  // Map values from 0-1023 to 0-255 / Mapea los valores de 0-1023 a 0-255
  redValue = map(redValue, 0, 1023, 0, 255);
  greenValue = map(greenValue, 0, 1023, 0, 255);
  blueValue = map(blueValue, 0, 1023, 0, 255);

  // Apply values to RGB LED / Aplica los valores al LED RGB
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
