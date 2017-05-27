#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define centerPIN 0
#define innerPIN 1
#define outerPIN 2

Adafruit_NeoPixel jewel = Adafruit_NeoPixel(7,centerPIN,NEO_RGBW + NEO_KHZ800);
Adafruit_NeoPixel inner = Adafruit_NeoPixel(16,innerPIN,NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel outer = Adafruit_NeoPixel(24,outerPIN,NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:

jewel.begin();
inner.begin();
outer.begin();

jewel.show();
inner.show();
outer.show();


}

void loop() 
{
 
 for(uint16_t r=0; r<19; r++) {
    inner.setPixelColor(r, 255,0,0);
    inner.show();
    delay(10);
    inner.setPixelColor(r-1, 127,0,0);
    inner.show();
    delay(10);
    inner.setPixelColor(r-2, 64,0,0);
    inner.show();
    delay(10);
    inner.setPixelColor(r-3, 0,0,0);
    inner.show();
    delay(10);
    
  }
  
 for(uint16_t c=0; c<6; c++) //sets pixels on Jewel 0-6 to breath waits 50ms, gets to full brightness then rotates backwards.
 { 
   jewel.setPixelColor (0,0,51*c,0,0);
   jewel.setPixelColor (1,0,51*c,0,0);
   jewel.setPixelColor (2,0,51*c,0,0);
   jewel.setPixelColor (3,0,51*c,0,0);
   jewel.setPixelColor (4,0,51*c,0,0);
   jewel.setPixelColor (5,0,51*c,0,0);
   jewel.setPixelColor (6,0,51*c,0,0);
   jewel.show();
   delay(200);
 if(c==5)
 {
    for(uint16_t d=5; d>0; d--)
{
   jewel.setPixelColor (0,0,51*d,0,0);
   jewel.setPixelColor (1,0,51*d,0,0);
   jewel.setPixelColor (2,0,51*d,0,0);
   jewel.setPixelColor (3,0,51*d,0,0);
   jewel.setPixelColor (4,0,51*d,0,0);
   jewel.setPixelColor (5,0,51*d,0,0);
   jewel.setPixelColor (6,0,51*d,0,0);
   jewel.show();
   delay(100);
   if(d==1)
   {
   jewel.setPixelColor (0,0,0,0,0);
   jewel.setPixelColor (1,0,0,0,0);
   jewel.setPixelColor (2,0,0,0,0);
   jewel.setPixelColor (3,0,0,0,0);
   jewel.setPixelColor (4,0,0,0,0);
   jewel.setPixelColor (5,0,0,0,0);
   jewel.setPixelColor (6,0,0,0,0);
   jewel.show();
   }
    
    }
 } 
}
 for(uint16_t o=0; o<27; o++) {
    outer.setPixelColor(o, 255,0,0);
    outer.show();
    delay(10);
    outer.setPixelColor(o-1, 127,0,0);
    outer.show();
    delay(10);
    outer.setPixelColor(o-2, 64,0,0);
    outer.show();
    delay(10);
    outer.setPixelColor(o-3, 0,0,0);
    outer.show();
    delay(10);
 }

 


}
