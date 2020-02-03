#include "Control.h"

Control::Control(byte startdelay){
  this->startdelay = startdelay;
  //Found this was needed in OOP code for arduino
  delay(startdelay)
  //Delay for each tournament, some use 3 seconds some dont.
  reset_PIN=0
  // Pin conected to the reset button of our shield
  pinMode(resetpin,INPUT);
  on();
}

void Control::on(){
  //Here i start controlling with movement and stuff

  //First check the activator was.. activated
  reset_state=digitalRead(reset_PIN)
  if(reset_state==HIGH){
    // here i should start moving or shit
  }
}
