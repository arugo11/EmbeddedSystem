void setup() {
  Serial.begin(9600);
  while (!Serial) { /* wait for Serial */ }
  Serial.println("Hello, World!");
}

void loop() {
  // ここは空っぽでOK
}
