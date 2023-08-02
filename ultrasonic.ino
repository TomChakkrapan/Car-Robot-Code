void ShowSoinc()
{
  Soinc = ultrasonic.read();
  Serial.print(Soinc);
  Serial.print("cm");
  Serial.println();
  delay(100);
}