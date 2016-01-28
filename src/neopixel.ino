#include <NeoPixelBus.h>

#define pixelCount 144
#define colorSaturation 128

NeoPixelBus strip = NeoPixelBus(pixelCount, 4);

RgbColor red = RgbColor(colorSaturation, 0, 0);
RgbColor green = RgbColor(0, colorSaturation, 0);
RgbColor blue = RgbColor(0, 0, colorSaturation);
RgbColor white = RgbColor(colorSaturation);
RgbColor black = RgbColor(0);
uint8_t Red = 0;
uint8_t Green = 0;
uint8_t Blue = 0;
void setup()
{
  // this resets all the neopixels to an off statea
  strip.Begin();
  strip.Show();
}


void loop()
{
    // set the colors, 
    // if they don't match in order, you may need to use NEO_GRB flag
    for( int i = 0; i < pixelCount; i++) {
        if(i == 0)  {
            strip.SetPixelColor(pixelCount-1, black);
        } else { 
            strip.SetPixelColor(i-1,black);
        }
        strip.SetPixelColor(i, RgbColor(Red,Green,Blue));
        strip.Show();
    }
    for( int i = pixelCount; i > 0; i--) {
        if(i == pixelCount)  {
            strip.SetPixelColor(pixelCount-1, black);
        } else { 
            strip.SetPixelColor(i+1,black);
        }
        strip.SetPixelColor(i, RgbColor(Red,Blue,Green));
        strip.Show();
    }
   Red = random(255);
   Green = random(255);
   Blue = random(255);
}

