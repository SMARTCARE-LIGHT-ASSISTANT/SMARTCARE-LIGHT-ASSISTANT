#include <Capacitor.h>

Capacitor cap1(7, A2);

const int analogPin = A0;

// Moving average parameters
const int N = 10;  // Window size
int capBuffer[N];
int capIndex = 0;
long capSum = 0;

void setup() {
  Serial.begin(9600);

  // Initialize buffer with initial readings
  for (int i = 0; i < N; i++) {
    capBuffer[i] = cap1.Measure();
    capSum += capBuffer[i];
  }
}

int getSmoothedCap() {
  int newValue = cap1.Measure();
  capSum = capSum - capBuffer[capIndex] + newValue;
  capBuffer[capIndex] = newValue;
  capIndex = (capIndex + 1) % N;

  return capSum / N;
}

void loop() {
  int capValue = getSmoothedCap();
  int sensorValue = analogRead(analogPin) / 8;  // Scale to ~0–127

  Serial.print("Smoothed Capacitor Value: ");
  Serial.print(capValue);
  Serial.print("  |  A0 Sensor Value: ");
  Serial.println(sensorValue);

  delay(250);  // Brief pause for readability
}
