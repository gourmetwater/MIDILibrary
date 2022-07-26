#include "Declarations.h"
void sendnoteoff(int midinote, int channel)
{
  if (channel > 15) channel = 0;
  //Use serial.write to send midi notes
 // int onvalue = 144 + channel;
  int offvalue = 128 + channel;

//  if (onoff = 1)
//    {Serial.write(onvalue);}
//    else if (onoff = 0)
  Serial.write(128);
  Serial.write(midinote);
  Serial.write(127); 

 
//    {Serial.write(onvalue);}
//  Serial.write(midinote);
//  if (onoff = 'n')
//  {
//    Serial.write(127); 
//  }
//  else
//  {
//    Serial.write(0);
//  }
}
