#ifndef Minisumo_Control_H
#define Minisumo_Control_H

#include <Arduino.h>

class Control{
  private:
    byte startdelay;
  public:
    Control(byte startdelay);
    void on();
};

#endif
