void setup()
{
  pinMode(A5,INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
  Serial.println("Fan is redy");
}
void loop()
{
  //Read data
  int raw_data = analogRead(A5);
  int temp = map(raw_data,20,358,-40,125);
  //UI
  Serial.print("raw: ");
  Serial.print(raw_data);
  Serial.print("\t");
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" ");
  Serial.write(0xB0);
  Serial.print("C\t");
  //Fan
 if(temp <= 20)
 {
   Serial.println("Level 0");
   analogWrite(3,0);
 }else if(temp <= 40){
   Serial.println("Level 1");
   analogWrite(3,100);
 }else if(temp <= 50){
   Serial.println("Level 2");
   analogWrite(3,175);
 }else if(temp = 60){
   Serial.println("Level 3");
   analogWrite(3,255);
 }
  delay(1000);
}
