#define PIN_MQ2 A1
#define LED     13

int value;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(PIN_MQ2, INPUT);
}

void loop() {
   value = analogRead(PIN_MQ2);

   Serial.println("VALUE - " + String(value));
   Serial.println(" ");

   if (value > 200) { digitalWrite(LED, HIGH); }
   else { digitalWrite(LED, LOW); }

   delay(200);
}