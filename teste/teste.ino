/*
 * Show two values => LED1 on => wait for S1 pressed => sound => LED off => repeat
 */

#include <MultiFunctionShield.h>

MultiFunctionShield MFS;

void setup ()
{
  unsigned long old = millis();
  MFS.begin();
  MFS.Display (old);
}
 
void loop()
{
  unsigned long now = millis();
  MFS.Display (now);
}