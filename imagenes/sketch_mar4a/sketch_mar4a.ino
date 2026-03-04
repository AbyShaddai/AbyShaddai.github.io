// Pines de los LEDs
int leds [] = {2, 3, 4, 5, 6, 7, 8, 9,};

// Pin del sensor 
int sensorPin = A0;

// Variable para la lectura
int sensorValue = 0;

void setup() {
  // Configurar LEDs como salida
  for (int i = 0; i<= 13; i++) { 
    pinMode (leds[i], OUTPUT);
 }

 Serial.begin(9600);
}

void loop() {
  // Leer valor del sensor 
  sensorValue = analogRead (sensorPin);
  
  Serial.println(sensorValue);

  //Apagar todos los LEDs primero
  for (int i = 0; i < 9; i++){
    digitaWrite(leds [i], LOW);
}

// Encender LEDs según el valor detectado
if (sensorValue > 100) digitalWrite(leds [0], HIGH);
if (sensorValue > 200) digitalWrite(leds [1], HIGH);
if (sensorValue > 300) digitalWrite(leds [2], HIGH);
if (sensorValue > 400) digitalWrite(leds [3], HIGH);
if (sensorValue > 500) digitalWrite(leds [4], HIGH);
if (sensorValue > 600) digitalWrite(leds [5], HIGH);
if (sensorValue > 700) digitalWrite(leds [6], HIGH);
if (sensorValue > 800) digitalWrite(leds [7], HIGH);

delay(100);
