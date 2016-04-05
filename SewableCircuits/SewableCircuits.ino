//******** Neopixel *********** //
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
#define NEOPIXEL_PIN 1
#define NUM_LEDS 3
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, NEOPIXEL_PIN, NEO_GRB + NEO_KHZ800);
int brightness = 90;
int delayVal = 50;
int pulseDelay = 20;
int DISPLAY_DELAY = 5000;//ms

uint32_t white         = strip.Color(24, 24, 24);
uint32_t hot_pink      = strip.Color(48, 0, 24);
uint32_t light_blue    = strip.Color(0, 24, 24);
uint32_t bright_blue   = strip.Color(10, 24, 50);
uint32_t leaf_green    = strip.Color(30, 44, 0);
uint32_t purple        = strip.Color(17, 0, 44);
uint32_t yellowOrange  = strip.Color(44, 30, 0);
uint32_t sapphire      = strip.Color(0, 50, 24);
uint32_t green         = strip.Color(0, 24, 0);
uint32_t red           = strip.Color(24, 0, 0);
uint32_t blue          = strip.Color(0, 0, 24);
uint32_t salmon_pink   = strip.Color(236, 79, 100); 
uint32_t cream         = strip.Color(246, 216, 180);
uint32_t lavendar      = strip.Color(174, 113, 208);
uint32_t deep_purple   = strip.Color(91, 44, 86); 
uint32_t medium_purple = strip.Color(232, 100, 255);
uint32_t yellow        = strip.Color(200, 200, 20);
uint32_t mediumSeaGreen       = strip.Color(12, 36, 23);
uint32_t mediumSpringGreen    = strip.Color(0, 50, 20);
uint32_t lightGreen       = strip.Color(10, 50, 10);
uint32_t honeyDew         = strip.Color(30, 51, 30);
uint32_t rosyBrown        = strip.Color(38, 35, 35);
uint32_t thistle          = strip.Color(43, 24, 43);
uint32_t plum             = strip.Color(44, 20, 44);
uint32_t mediumOrchid     = strip.Color(44, 10, 44);
uint32_t mediumPurple     = strip.Color(44, 5, 44);
uint32_t mediumSlateBlue  = strip.Color(10, 10, 50);
uint32_t cornFlowerBlue   = strip.Color(5, 10, 50);
uint32_t skyBlue          = strip.Color(20, 30, 50);
uint32_t lightSkyBlue     = strip.Color(27, 30, 50);
uint32_t paleTurquoise    = strip.Color(20, 30, 48);
uint32_t powderBlue       = strip.Color(25, 35, 50);
uint32_t aquamarine       = strip.Color(25, 51, 42);
uint32_t turquoise        = strip.Color(13, 45, 42);
uint32_t mediumTurquoise  = strip.Color(14, 42, 41);
uint32_t lime  = strip.Color(0, 100, 0);


void setup() {
  // put your setup code here, to run once:

  // Neopixel setup
  strip.begin();
  strip.setBrightness(brightness);
  strip.show(); // Initialize all pixels to 'off'

}

void loop() {
  // put your main code here, to run repeatedly:
  chaseHotPink();
  chaseYellowOrange();
  chaseTurquoise();
  chase();
}

void chaseHotPink() {
  chasePersist(strip.numPixels(), hot_pink);
  delay(DISPLAY_DELAY/2);
}

void chaseYellowOrange() {
  chasePersist(strip.numPixels(), yellowOrange);
  delay(DISPLAY_DELAY/2);
}

void chaseTurquoise() {
  chasePersist(strip.numPixels(), turquoise);
  delay(DISPLAY_DELAY/2);
}

static void chase() {
  for(uint16_t i=0; i<strip.numPixels()+4; i++) {
      strip.setPixelColor(i  , blue); // Draw new pixel
      strip.setPixelColor(i-1, 0); // Erase pixel a few steps back
      strip.show();
      delay(delayVal);
  }
}

static void chasePersist(int numPixels, uint32_t c) {
 for(int i=0;i<numPixels;i++) {
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    strip.setPixelColor(i, c); // Moderately bright green color.
    strip.show(); // This sends the updated pixel color to the hardware.
    delay(delayVal); // Delay for a period of time (in milliseconds).
  } 
}
