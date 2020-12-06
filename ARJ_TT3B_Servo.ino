//Tugas Kendali Motor Servo
#include <Servo.h> 
Servo servo1;//buat objek motor servo 1               
Servo servo2; // buat objek motor servo 2
//maksimum 8 objek servo yang bisa dibuat dari library ini
int sudut= 0; //variabel untuk menyimpan sudut posisi servo 
 
void setup() 
{ 
  servo1.attach(9);
  servo2.attach(7);         
} 
 
void loop() 
{ 
  for(sudut = 0; sudut < 180; sudut += 1) {
    servo1.write(sudut);
    servo2.write(sudut);
    delay(15);
  } 
   
  for(sudut = 180; sudut>=1; sudut-=1){                                
    servo1.write(sudut); 
    servo2.write(sudut);
    delay(15);
   } 
}
