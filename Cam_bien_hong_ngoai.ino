const int sensorPin = 4;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int sensorState = digitalRead(sensorPin);

  if (sensorState == LOW) {
    Serial.println("Phát hiện vật cản!");
  } else {
    Serial.println("Không có vật cản.");
    digitalWrite(ledPin, LOW);
  }

  delay(200); 
}