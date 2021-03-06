// brings carriage to the rightmost, needle 0

void homing() {

  //servos
  servoFB.write(servoFB_out);
  delay (20);
  servoFT.write(servoFT_out);
  delay (20);
  servoBB.write(servoBB_out); 
  delay (20);
  servoBT.write(servoBT_out);
  delay (20);

  //CW right
  digitalWrite(reset, LOW);    
  delay(10);
  digitalWrite(reset, HIGH);   
  digitalWrite(dir, HIGH);

  for ( j = 0; j<stepsRotation; j++)       
  {
    digitalWrite(steps, HIGH);  
    digitalWrite(steps, LOW);   
    delayMicroseconds(speedRotation); 
  } 

  needleBed = 1;   //carriage is on the right so the machine can only knit going to the left, 
  //so it knits on the front needle bed.
} 


