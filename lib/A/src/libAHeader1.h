#pragma once

#ifdef ARDUINO
#    include <FastLED.h>
#endif

CRGB getColourFromA1() {
    return CRGB{255, 255, 255};
}
