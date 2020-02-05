#include "Control.h"

Control::Control(byte startdelay){
  this->startdelay = startdelay;
  //Found this was needed in OOP code for arduino
  delay(startdelay);
  //Delay for each tournament, some use 3 seconds some dont.
  byte reset_PIN=0;
  // Pin conected to the reset button of our shield
  pinMode(reset_PIN,INPUT);
  on();


  void Control::on(byte reset_PIN){
    //Here i start controlling with movement and stuff
    this->reset_PIN=reset_PIN;
    //First check the activator was.. activated
    reset_state=digitalRead(reset_PIN);
    if(reset_state==HIGH){
      // here i should start moving or shit
    }
  }
}
