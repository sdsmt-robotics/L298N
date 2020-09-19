#ifndef L289N__
#define L289N__

//for ESP32 used in 2020 Super Robo Time
#ifdef ARDUINO_NodeMCU_32S
#include <analogWrite.h> // https://github.com/ERROPiX/ESP32_AnalogWrite
#endif

#include "Arduino.h"

class L289N
{
public:
  L289N(int _dir1, int _dir2, int _pwm, bool _invert = false);
  
  void forwards();
  void backwards();
  void init();
  void setSpeed(int speed);
  void setSpeedDirection(int speed);
  
  int dir1, dir2, pwm;
  bool invert;
  bool forwardDirection, backwardDirection;
};

#endif
