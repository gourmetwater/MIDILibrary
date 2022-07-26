#include "Declarations.h"
//const int power = 2;
//const int inputpin = 2;
//const int shiftby = 2;
//int temp = 0;
//int onarray[power][inputpin][3];
int onarray[power][inputpin][3];


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  for (int i = 0; i < power; i++)
  {
    //Shift pin range by the starting pin number, shiftby. Set as OUTPUT.
    int temp = i + shiftby;
    pinMode(temp, OUTPUT);

    //Shift pin range by shiftby, shift pin range by powerpin range, power. Set as OUTPUT.
    temp = i + shiftby + power;
    pinMode(temp, INPUT);
  }

  for (int i = 0; i < power; i++)
  {
    for (int j = 0; j < inputpin; j++)
    {
      onarray[i][j][0] = 0;
      onarray[i][j][1] = -1;
      onarray[i][j][2] = 0;
    }
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
  matrix(onarray);
  play(onarray); 
  delay(1000);
}
