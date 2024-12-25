// #include <Arduino.h> 

const int sensorMin = 0;     // Minimum sensor value
const int sensorMax = 1023;  // Maximum sensor value

const int IN_D0 = 3;         // Digital input pin

void setup() {
  Serial.begin(9600);        // Initialize Serial communication
  pinMode(IN_D0, INPUT);     // Set digital pin as input
}

void loop() {
  int sensorReading = analogRead(A0); // Read the sensor on analog pin A0
  bool digitalReading = digitalRead(IN_D0); // Read digital pin D3

  // Map the analog reading to a range of 0 to 2
  int range = map(sensorReading, sensorMin, sensorMax, 0, 2);
  
  // Evaluate the mapped range and digital input
  switch (range) {
    case 0: 
      Serial.println("bzaf chta :)"); 
      break;
    case 1: 
      Serial.println("chwiya chta"); 
      break;
    case 2: 
      Serial.println("Nachf"); 
      break;
  }

  
  if (digitalReading == HIGH) {
    Serial.println("Digital sensor active!");
  } else {
    Serial.println("Digital sensor inactive.");
  }

  delay(1000); 
}
