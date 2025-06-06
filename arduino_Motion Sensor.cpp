void setup()
{
  pinMode(2,INPUT);// use D2 pin as input
  Serial.begin(9600);
  Serial.println("Arduino Motion Sensor - Ready");
}

void loop()
{
  //Read Data function
  int RAW_DATA = digitalRead(2);
  //UI function
  Serial.print("motion: ");
  Serial.println(RAW_DATA);
  if(RAW_DATA == 1)
  {
    analogWrite(3,255); //ถ้าใช้ digital pin เปรี่ยนเป็น digitalWrite(5,HIGH หรือ LOW);
  }else{
  	analogWrite(3,0);
  }
  
  delay(500);
}
