void MotorL(int Int , int pwm)
{ //มอเตอร์ซ้าย 1 เดินหน้า -1 ถอยหลัง
  if(Int == 1)
  {
    digitalWrite(MA1, LOW);
    digitalWrite(MA2, HIGH);
    analogWrite(PWM_A, pwm);
  }
  if(Int == -1)
  {
    digitalWrite(MA1, HIGH);
    digitalWrite(MA2, LOW);
    analogWrite(PWM_A, pwm);
  }
  
}
void MotorR(int Int , int pwm)
{//มอเตอร์ขวา 1 เดินหน้า -1 ถอยหลัง
  if(Int == 1)
  {
    digitalWrite(MB1, HIGH);
    digitalWrite(MB2, LOW);
    analogWrite(PWM_B, pwm);
  }
  if(Int == -1)
  {
    digitalWrite(MB1, LOW);
    digitalWrite(MB2, HIGH);
    analogWrite(PWM_B, pwm);

  }
  
}
//////////////////////////////
/////////////////////////////
/* กำหนดความเร็ว*/
void Fw(int pwm)
{
  //เดินหน้า โดยความเร็ว
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, HIGH);
  analogWrite(PWM_A, pwm);
 
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  analogWrite(PWM_B, pwm);
}
void Tl(int pwm)
{// หมุนขวา โดยกำหนดเวลาและความเร็ว
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  analogWrite(PWM_A, pwm);
 
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  analogWrite(PWM_B, pwm);
}
 
void Tr(int pwm)
{// หมุนขวา โดยกำหนดเวลาและความเร็ว
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, HIGH);
  analogWrite(PWM_A, pwm);
 
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, HIGH);
  analogWrite(PWM_B, pwm);
}
void Stop()
{// หยุดมอเตอร์
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, LOW);
  analogWrite(PWM_A, 0);
 
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, LOW);
  analogWrite(PWM_B, 0);
 
}


///////////////////////////////
///////////////////////
/* แบบกำหนดเวลาและความเร็ว*/

void Fw(int time ,int pwm)
{ //เดินหน้า โดยกำหนดเวลาและความเร็ว
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, HIGH);
  analogWrite(PWM_A, pwm);
 
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  analogWrite(PWM_B, pwm);
 
  delay(time);
}
 
void Bk(int time ,int pwm)
{ //ถอยหลัง โดยกำหนดเวลาและความเร็ว
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  analogWrite(PWM_A, pwm);
 
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, HIGH);
  analogWrite(PWM_B, pwm);
 
  delay(time);
}
 
void Tl(int time ,int pwm)
{// หมุนขวา โดยกำหนดเวลาและความเร็ว
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  analogWrite(PWM_A, pwm);
 
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  analogWrite(PWM_B, pwm);
  delay(time);
}
 
void Tr(int time , int pwm)
{// หมุนขวา โดยกำหนดเวลาและความเร็ว
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, HIGH);
  analogWrite(PWM_A, pwm);
 
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, HIGH);
  analogWrite(PWM_B, pwm);
 
  delay(time);
}
void Stop(int time)
{// หยุดมอเตอร์โดยมีการกำหนดเวลาหยุด
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, LOW);
  analogWrite(PWM_A, 0);
 
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, LOW);
  analogWrite(PWM_B, 0);
  delay(time);
}
 
