
#include <Wire.h>
#include <SparkFun_MMA8452Q.h> 

MMA8452Q accel;
  
void setup(){
  Serial.begin(9600);
  accel.init();
}

void loop(){
  if (accel.available()){
    accel.read();
    Serial.print(accel.cx, 3);
    Serial.print(accel.cy, 3);

    Serial.print(accel.cz, 3);
    Serial.println();
  }
}

