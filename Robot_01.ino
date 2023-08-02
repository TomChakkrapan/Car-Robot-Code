#include <Ultrasonic.h>
int MA1 = 12;     // Motor A1
int MA2 =  3;     // Motor A2
int PWM_A =  10;   // Speed Motor A

int MB1 =  13;     // Motor B1
int MB2 =  8;     // Motor B2
int PWM_B =  11;  // Speed Motor B


const int buzzer = 4; //buzzer to arduino pin 4

int digitalPin1 = 2; //ประกาศตัวแปร ให้ analogPin แทนขา digital ขาที่2
int digitalPin2 = 5; //ประกาศตัวแปร ให้ analogPin แทนขา digital ขาที่5

Ultrasonic ultrasonic(7, 6); // ultrasonic(trig, echo);
int Check_objLOW = 10 ; // ระยะในการเจอวัตถุ

int IR_L = digitalRead(digitalPin1); //ประกาศตัวแปร IR_L ให้ รับค่าจาก analogPin แทนขา digital ขาที่2
int IR_R = digitalRead(digitalPin2); //ประกาศตัวแปร IR_L ให้ รับค่าจาก analogPin แทนขา digital ขาที่5
int Soinc = ultrasonic.read(); //ประกาศตัวแปร รับค่าจาก ultrasonic
void setup() {
  //Setup Channel A
  pinMode(12, OUTPUT); //Motor A1
  pinMode(3, OUTPUT); //Motor A2
  pinMode(10, OUTPUT); //Speed PWM Motor A
  //Setup Channel B
  pinMode(13, OUTPUT);  //Motor B1
  pinMode(8, OUTPUT);  //Motor B2
  pinMode(11, OUTPUT); //Speed PWM Motor B

  pinMode(buzzer, OUTPUT); // Set buzzer - pin 4 as an output
  Serial.begin(9600);
}
 
void loop() 
{
  //ShowIR();
  IR_L = digitalRead(digitalPin1);
  IR_R = digitalRead(digitalPin2);
  Soinc = ultrasonic.read();
  trackLine(120 ,200); //trackLine(ความเร็วในการเดินหน้า ,ความเร็วในการเลี้ยว);
}





