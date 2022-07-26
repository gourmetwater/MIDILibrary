#include "Declarations.h"
int computemidinotevalue(int i, int j)
{
  int basenote;
  int interval;
  
    switch (i)
    {
      case 0:
      basenote = 69; break;
      case 1:
      basenote = 72; break;
      default:
      basenote = -1; //continue
    }
    switch (j)
    {
      case 0:
      interval = 0; break;
      case 1:
      interval = 4; break;
      default:
      interval = -1; //continue
    }
    int newnote = basenote + (interval*3);
    return newnote;
}
