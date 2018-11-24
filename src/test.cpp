#include "temp_led.h"
#include "gtest/gtest.h"

namespace {
	TEST(TempLed, turnOn) {
		TempLed tempLed(12, 20);
		int rightTemp = 20;
		EXPECT_TRUE(tempLed.shouldTurnOnWith(rightTemp));
	}

	TEST(TempLed, turnOff) {
		TempLed tempLed(12, 20);
		int tooColdTemp = 10;
		EXPECT_FALSE(tempLed.shouldTurnOnWith(tooColdTemp));
	}
}
