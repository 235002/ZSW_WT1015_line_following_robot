#include <DRV8835MotorShield.h>

int inputLeft = A1;
int inputRight = A2;
//int output = 3;
int val =0;

DRV8835MotorShield motors;

#define mid_value 512

void turnLeft(){
  motors.setM1Speed(0);
  motors.setM2Speed(100);
}

void turnRight(){
  motors.setM1Speed(100);
  motors.setM2Speed(0);
}

bool isOnLine(int val){
  if(val > mid_value){
    return false;  // jest nie na lini
  }else{
    return true;   // jest na czarnej lini
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(inputLeft, INPUT);
  pinMode(inputRight, INPUT);
}

void loop() {
  int valLeft = analogRead(inputLeft);
  int valRight = analogRead(inputRight);
//  Serial.println("Lewy: %d  | Prawy: %d", valLeft, valRight);
Serial.println(valLeft);
//  delay(50);
  if(!isOnLine(valLeft) && !isOnLine(valRight)) { // lewy nie jest na lini | prawy nie jest na lini -> jedź prosto
    motors.setM2Speed(150);
    motors.setM1Speed(150);
  }
  else if(!isOnLine(valLeft) && isOnLine(valRight)){
    turnRight();
  }else if(isOnLine(valLeft) && !isOnLine(valRight)){
    turnLeft();
  }
  else{
    motors.setM1Speed(0);
    motors.setM2Speed(0);
  }
}
