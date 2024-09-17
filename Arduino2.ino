void setup() {
  Serial.begin(9600); 
}

void loop() {
  float LIGHT_INTENSITY = analogRead(A0); 
  float TEMP = analogRead(A1); 
  float voltage = TEMP * (5.0 / 1023.0); 
  float temp = (voltage - 0.5) * 100.0; 

  
  Serial.print("LIGHT: ");
  Serial.print(LIGHT_INTENSITY);
  Serial.print("  TEMP: ");
  Serial.println(temp);

  delay(1000); 
}
