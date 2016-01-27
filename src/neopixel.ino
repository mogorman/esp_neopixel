#include <NeoPixelBus.h>

#define pixelCount 144
#define colorSaturation 128

NeoPixelBus strip = NeoPixelBus(pixelCount, 4);

RgbColor red = RgbColor(colorSaturation, 0, 0);
RgbColor green = RgbColor(0, colorSaturation, 0);
RgbColor blue = RgbColor(0, 0, colorSaturation);
RgbColor white = RgbColor(colorSaturation);
RgbColor black = RgbColor(0);

void setup()
{
  // this resets all the neopixels to an off state
  strip.Begin();
  strip.Show();
}


void loop()
{
    delay(1000);

    // set the colors, 
    // if they don't match in order, you may need to use NEO_GRB flag
    for( int i = 0; i < pixelCount; i++) {
        strip.SetPixelColor(i, white);
    }
    strip.SetPixelColor(1, green);
    strip.SetPixelColor(2, blue);
    strip.SetPixelColor(3, white);
    strip.Show();

    delay(3000);
    for( int i = 0; i < pixelCount; i++) {
        strip.SetPixelColor(i, black);
    }
    // turn off the pixels
    strip.Show();
}

