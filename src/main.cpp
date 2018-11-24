#include <iostream>
#include <string>

#include "temp_led.h"

int main() {
  TempLed green {13, 20};
  int extTemp = 20;
  std::string statusLed;
  if (green.shouldTurnOnWith(extTemp)) 
     statusLed = "On";
    else
     statusLed = "Off";
  std::cout << statusLed << std::endl;
  return 0;
}

