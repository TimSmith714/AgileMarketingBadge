//Agile Tie
#include <Adafruit_NeoPixel.h>
#define PIN 1
Adafruit_NeoPixel strip = Adafruit_NeoPixel(12, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  int i;
 strip.begin();
 strip.setBrightness(40);
 strip.show();
 for (i=0; i<12; i++) {
   strip.setPixelColor(i, strip.Color(0,255,0));
 }  
 strip.show();
}

void loop() {
  //here is the loop
  int led, fade, i, flash;
  for (led=0; led<12; led++){
    for (fade=0; fade<20; fade++){
      strip.setPixelColor(led, strip.Color(12.8 * fade, 255 - (12.8 * fade),0));
      strip.show();
      delay(2500);
    }    
    for (flash=0; flash<20; flash++){
      strip.setPixelColor(led, strip.Color(255,0,0));
      strip.show();
      delay(20);
      strip.setPixelColor(led, strip.Color(0,0,0));
      strip.show();
      delay(20);
    }
    strip.setPixelColor(led, strip.Color(255,0,0));
    strip.show();
  }
   for (i=0; i<12; i++) {
   strip.setPixelColor(i, strip.Color(0,255,0));
 }  
 strip.show();
}
