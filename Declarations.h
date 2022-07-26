#define power 2 //Range of output pins.
#define inputpin 2 //Range of input pins.
#define shiftby 2 //The first pin to be used for power.



void matrix(int onarray[power][inputpin][3]);
void play(int onarray[power][inputpin][3]);
void sendnotecommand(int midinote, int channel, int onoff);
void sendnoteoff(int midinote, int channel);
int computemidinotevalue(int i, int j);
