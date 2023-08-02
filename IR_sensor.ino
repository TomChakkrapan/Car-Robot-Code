void ShowIR()
{
  IR_L = digitalRead(digitalPin1);  //อ่านค่าสัญญาณ analog
  Serial.print("IR1_L =  "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "IR1_L = "
  Serial.print(IR_L); // พิมพ์ค่าของตัวแปร IR1_L
  IR_R = digitalRead(digitalPin2);  //อ่านค่าสัญญาณ analog ขา2
  Serial.print("    IR_R =  "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "IR2_R = "
  Serial.println(IR_R); // พิมพ์ค่าของตัวแปร IR2_R
  delay(100);
}