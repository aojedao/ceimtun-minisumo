  #include "Movement.h"

Movement::Movement(){
  //Los pines digitales controlaran
  motorA1_PIN=D4;
  motorA2_PIN=D9;
  motorB1_PIN=D7;
  motorB2_PIN=D8;
  
  pinMode(motorA1_PIN,OUTPUT);
  pinMode(motorA2_PIN,OUTPUT);
  pinMode(motorB1_PIN,OUTPUT);
  pinMode(motorB2_PIN,OUTPUT);
}
  
