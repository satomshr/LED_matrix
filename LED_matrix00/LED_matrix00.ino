// Program to demonstrate the MD_Parola library
//
// Simplest program that does something useful - Hello World!
//
// MD_MAX72XX library can be found at https://github.com/MajicDesigns/MD_MAX72XX
//

#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

// Define the number of devices we have in the chain and the hardware interface
// NOTE: These pin numbers will probably not work with your hardware and may
// need to be adapted
#define HARDWARE_TYPE MD_MAX72XX::ICSTATION_HW
#define MAX_DEVICES 1

#define CLK_PIN   12
#define DATA_PIN  10
#define CS_PIN    11

// Hardware SPI connection
// MD_Parola P = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);
// Arbitrary output pins
MD_Parola P = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

void setup(void)
{
  P.begin();
//  P.displayText("A", PA_CENTER, 0, 0, PA_PRINT, PA_NO_EFFECT);
//  P.displayText("A", PA_CENTER, 10, 0, PA_SLICE, PA_NO_EFFECT);
//  P.displayText("A", PA_CENTER, 100, 100, PA_BLINDS, PA_SCROLL_DOWN);
  P.displayText("A", PA_CENTER, 100, 100, PA_SLICE, PA_SCROLL_DOWN);
}

void loop(void)
{
  P.displayAnimate();
}
