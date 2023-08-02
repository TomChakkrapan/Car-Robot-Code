void trackLine(int pwmf,int pwm)
{
    if (IR_L == 1 )
    {
      MotorL(-1,pwm); // 1 คือเดินหน้า ,-1 คือถอยหลัง, pwm ความเร็วมอเตอร์
      MotorR(1,pwm); // 1 คือเดินหน้า ,-1 คือถอยหลัง, pwm ความเร็วมอเตอร์
      delay(60); // เวลาในการเลี้ยว IR_L เจอเส้นดำ
    }
    if (IR_R == 1 )
    {
      MotorL(1,pwm);  // 1 คือเดินหน้า ,-1 คือถอยหลัง, pwm ความเร็วมอเตอร์
      MotorR(-1,pwm); // 1 คือเดินหน้า ,-1 คือถอยหลัง, pwm ความเร็วมอเตอร์
      delay(60); // เวลาในการเลี้ยว IR_L เจอเส้นดำ

    }
    if ((IR_R == 0 && IR_L == 0))
    {// เซ็นเซอร์ไม่จอเส้นดำเดินหน้า
      Fw(pwmf); 
    }
    if (Soinc <= Check_objLOW && Soinc != 0)
    { // ultrasonic เจอวัตถุ 
      Stop();
      analogWrite(buzzer, 200);
      delay(1000);
      analogWrite(buzzer, 0);
      delay(1000);
      
    }
}



