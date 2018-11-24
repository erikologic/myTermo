#include "temp_led.h"

TempLed::TempLed(int p, int t) : pin(p), temp(t) {}

bool TempLed::shouldTurnOnWith(int extTemp) {
  return temp == extTemp;
}
