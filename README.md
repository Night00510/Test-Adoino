# [Temperture Sensor](https://www.tinkercad.com/things/jaCmC2YXz33-arduino-senser-tmp36)
Test Adoino on tinkercad
![image](https://github.com/user-attachments/assets/bda4bf09-9dc5-48cb-9d33-678110206eef)
## Ardoino Uno R3
## Temperture Sensor [TMP36]
- power 3.3v
- Vout A0 pin
# [Motion sensor](https://www.tinkercad.com/things/3eUQEekE9Ae-ardoino-motion-sensor)
## ยังไม่มี function เปิดไฟค้างเมือขยับ และ ปิดไฟเมื่อขยับอีกคลั้ง
--- digital pin
![image](https://github.com/user-attachments/assets/49416acc-f4b5-4024-ab0f-e2199607184c)
--- PWM (Pulse Width Modulation) pin มี < ~ > นำหน้า  
![image](https://github.com/user-attachments/assets/edbdf625-0766-44cc-82cf-b6820ac5151b)
![image](https://github.com/user-attachments/assets/2192d6ae-20eb-4f94-a209-80f7e8d3d6bf)
## Ardoino Uno R3
## Passsive infrarad Sensors (PIR)
- power 5v
- Signal D2 pin
## LED
- Anode A5 หรือ D3 pin < PWM pin ปรับความสว่างได้ >
- - Resistor 220 Ω
- GND Cathode
# [Fan_temp](https://www.tinkercad.com/things/eaFdEfftEAM-ardoinofan)
![image](https://github.com/user-attachments/assets/2d13f8cd-6884-43c0-a58c-5277c76b8e90)
## Ardoino Uno R3
## Temperture Sensor [TMP36]
- power 3.3v
- Vout A5 pin
## Power Supply
- ต่อ + เข้า pin E ของ transistor
- ต่อ - ให้ชนกับ Ground ของ ardoino เพื่อสร้าง common ground
![image](https://github.com/user-attachments/assets/a81fee4e-d42d-45a1-9d7b-0aac4138ab1b)

## DC Motor
- ต่อ + เข้า pin C ของ transistor
- ต่อ - เข้า common ground
- ขั้ว + - ต่อสลับกันได้ (ควรลอง)
## NPN Transistor [BJT]
![image](https://github.com/user-attachments/assets/e25fdd58-3f83-40d1-be91-db7a1460b71e)
- ไฟเข้าขา E
- ไฟออกขา C
- รับ input จาก D3 pin ของ arduino เข้า B pin transistor


