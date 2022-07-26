#include "Declarations.h"
void matrix(int onarray[power][inputpin][3])
{
  int temp;
  int temp2;
  for (int i = 0; i < power; i++)
  {
    temp = i + shiftby;
    digitalWrite(temp, HIGH);
      for (int j = 0; j < inputpin; j++)
      {
        temp2 = j + power + shiftby;
        onarray[i][j][0] = (digitalRead(temp2) == HIGH ? 1 : 0);
      }
    digitalWrite(temp, LOW);
  }
}
