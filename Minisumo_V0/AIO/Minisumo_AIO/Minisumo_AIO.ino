class Control{
  private:
    byte startdelay;
    byte reset_PIN;
  public:
    Control(byte startdelay){
    void on();
    this->startdelay = startdelay;
    //Found this was needed in OOP code for arduino
    delay(startdelay);
    //Delay for each tournament, some use 3 seconds some dont.
    reset_PIN=0;
    // Pin connected to the reset button of our shield
    pinMode(reset_PIN,INPUT);
    on();
    }
    void on(byte reset_PIN){
      //Here i start controlling with movement and stuff
      this->reset_PIN=reset_PIN;
      //First check the activator was.. activated
      byte reset_state;
      reset_state=digitalRead(reset_PIN);
      if(reset_state==HIGH){
        // here i should start moving or shit
      }
    }
};

//--------------------Next class--------------------------------

class Movement{
  private:
    byte motorA1_PIN;
    byte motorA2_PIN;
    byte motorB1_PIN;
    byte motorB2_PIN;
    byte PWMA;
    byte PWMB;

    char Location;
  public:
  Movement(char Location){
    //Los pines digitales controlaran
    //Todos son Digitales
    this->Location=Location;
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
      case 'Front':
        motorA1_PIN=HIGH;
        motorA2_PIN=LOW;
        motorB1_PIN=HIGH;
        motorB2_PIN=LOW;
        break;
      case 'Right':
        motorA1_PIN=HIGH;
        motorB2_PIN=HIGH;
        motorA2_PIN=LOW;
        motorB1_PIN=LOW;
        break;
      case 'Left':
        motorA1_PIN=LOW;
        motorA2_PIN=HIGH;
        motorB1_PIN=HIGH;
        motorB2_PIN=LOW;
        break;
      case 'Back':
        motorA1_PIN=LOW;
        motorA2_PIN=HIGH;
        motorB1_PIN=HIGH;
        motorB2_PIN=LOW;
        break;
    }
  }
  
  void Dojo(){
    
  }
};
//--------------------------Next Class---------------------
class Sense{
  private:
  byte USL_PIN; //UltraSoundLeft
  byte USR_PIN;//UltraSoundRigth
  byte USFL_PIN;//UltraSoundFrontLeft
  byte USFR_PIN;//UltraSoundFrontRigth
  unsigned long Distance = 0;
 
  public:
   Sense(){
    //Los pines digitales controlaran
    byte pin;
    pinMode(pin , INPUT);
    
    USL_PIN=4; //UltraSoundLeft
    USR_PIN=9;//UltraSoundRigth
    USFL_PIN=7;//UltraSoundFrontLeft
    USFR_PIN=8;//UltraSoundFrontRigth
  }
  
  
  void Location(){
    byte pin;
   Distance =  analogRead (pin);
   char Position;
   if(Distance > 50 && Distance < 150 ){
    //movement.
    Position = 'Front';
    
    return Position;
   }
    
  }
  void Offside(){
    byte pin;
  byte WB =  analogRead (pin);
  
  }
};

//-------------------------------------------------------------------------------------------

void setup(){
}
void loop(){
}
