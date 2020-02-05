  #include "Sense.h"


Sense::Sense(){
  //Los pines digitales controlaran
  byte pin;
  pinMode(pin , INPUT);
  
  USL_PIN=4; //UltraSoundLeft
  USR_PIN=9;//UltraSoundRigth
  USFL_PIN=7;//UltraSoundFrontLeft
  USFR_PIN=8;//UltraSoundFrontRigth
}


void Sense::Location(){
byte Distance =  analogRead (pin);
 if(Distance > 50 && Distance < 150 ){
  //movement.
 }
  
}
void Sense::Offside(){
byte WB =  analogRead (pin);

}
