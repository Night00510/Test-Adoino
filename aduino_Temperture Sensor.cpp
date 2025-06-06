const int SENSOR_PIN = A0; 
const int RAW_MIN = 20;
const int RAW_MAX = 358;
const int TEMP_MIN = -40;
const int TEMP_MAX = 125;

void setup() {
  // ไม่จำเป็นต้องกำหนด pinMode สำหรับ A0 ใน Arduino เพราะเป็น INPUT โดย default
  pinMode(SENSOR_PIN, INPUT); 
  Serial.begin(9600);
  Serial.println("Arduino Temperature Sensor - Ready"); 
}

void loop() 
{
  int rawSensorValue = analogRead(SENSOR_PIN);
  int temperatureCelsius = map(rawSensorValue, RAW_MIN, RAW_MAX, TEMP_MIN, TEMP_MAX);
  Serial.print("Raw: ");
  Serial.print(rawSensorValue);
  Serial.print("   Temp: ");
  Serial.print(temperatureCelsius);
  Serial.write(0xB0);
  Serial.println("C");
  
  delay(1000); 
}
