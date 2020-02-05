#include "Movement.h"
#include"Sense.h"

Movement::Movement(){
  //Los pines digitales controlaran
  //Todos son Digitales
  motorA1_PIN=4;
  motorA2_PIN=9;
  motorB1_PIN=7;
  motorB2_PIN=8;

  PWMA=3;
  PWMB=3;
  
  pinMode(motorA1_PIN,OUTPUT);
  pinMode(motorA2_PIN,OUTPUT);
  pinMode(motorB1_PIN,OUTPUT);
  pinMode(motorB2_PIN,OUTPUT);
}

void Fight(byte motorA1_PIN,byte motorA2_PIN,byte motorB1_PIN,byte motorB2_PIN,byte PWMA,byte PWMB){
  this->motorA1_PIN=motorA1_PIN;
  this->motorA2_PIN=motorA1_PIN;
  this->motorB1_PIN=motorA1_PIN;
  this->motorB2_PIN=motorA1_PIN;
  this->PWMA=PWMA;
  this->PWMB=PWMB;
  switch (Location){
    case Front:
      motorA1_PIN=HIGH;
      motorA2_PIN=LOW;
      motorB1_PIN=HIGH;
      motorB2_PIN=LOW;
      break;
    case Right:
      motorA1_PIN=HIGH;
      motorB2_PIN=HIGH;
      motorA2_PIN=LOW;
      motorB1_PIN=LOW;
      break;
    case Left:
      motorA1_PIN=LOW;
      motorA2_PIN=HIGH;
      motorB1_PIN=HIGH;
      motorB2_PIN=LOW;
      break;
    case Back:
      motorA1_PIN=LOW;
      motorA2_PIN=HIGH;
      motorB1_PIN=HIGH;
      motorB2_PIN=LOW;
      break;
  }
}

void Dojo(){
  
}
