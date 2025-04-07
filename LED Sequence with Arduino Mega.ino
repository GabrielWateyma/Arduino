// LED Pins / Pines de los LEDs
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};
int numLeds = 8;

void setup() {
  // Configure LED pins as outputs / Configura los pines de los LEDs como salidas
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // LED on/off sequence / Secuencia de encendido y apagado de LEDs
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(200); // Wait 200 milliseconds / Espera 200 milisegundos
    digitalWrite(leds[i], LOW);
    delay(100); // Wait 200 milliseconds / Espera 100 milisegundos
  }

  // Reverse sequence / Secuencia inversa
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(200);
    digitalWrite(leds[i], LOW);
    delay(100);
  }
}
