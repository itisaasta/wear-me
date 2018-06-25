#include <Adafruit_NeoPixel.h>

const int DATA_PIN = 10;  // pin on FLORA
const int PIXEL_NUM = 60; // number of neopixels in chain

const int BRIGHTNESS = 64;
const int WAIT = 600; // delay transitioning colors

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_NUM, DATA_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(DATA_PIN, INPUT);
  digitalWrite(DATA_PIN, HIGH);
  strip.begin();
  strip.setBrightness(BRIGHTNESS);
}

void loop() {
  colorWipe(strip.Color(255, 0, 0), WAIT); // Red
  colorWipe(strip.Color(0, 255, 0), WAIT); // Green
  colorWipe(strip.Color(0, 0, 255), WAIT); // Blue
}

// Fill the neopixels one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}
