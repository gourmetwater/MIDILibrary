#include "Declarations.h"

void play(int onar[power][inputpin][3])
{
  int note = 0;
  int channel = 0;
  for (int i = 0; i < power; i++)
  {
    for (int j = 0; j < inputpin; j++)
    {
      if (onar[i][j][0] == 1 && onar[i][j][1] == -1)
     {
      //turn on the notelocated at ij;
      
      note = computemidinotevalue(i, j);
      sendnotecommand(note, 0, 1);
      onar[i][j][1] = 1;
     }
     else if (onar[i][j][0] == 0 && onar[i][j][1] == 1)
     {
      //turn off the note at location ij
      note = computemidinotevalue(i, j);
      sendnoteoff(note, 0);
      onar[i][j][1] = -1;
     }
     else
     {
      //do nothing.
     }
    }
  }
}
