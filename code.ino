const int soilPin = A0;
const int motorPin = 7;

int threshold = 500;

void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int soilValue = analogRead(soilPin);

  Serial.print("Soil Moisture: ");
  Serial.println(soilValue);

  if (soilValue > threshold) {
    digitalWrite(motorPin, HIGH); // Pump ON
    Serial.println("Soil Dry - Pump ON");
  }
  else {
    digitalWrite(motorPin, LOW); // Pump OFF
    Serial.println("Soil Wet - Pump OFF");
  }

  delay(1000);
}