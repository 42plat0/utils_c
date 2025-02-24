#include "utils.h"

int max(int a, int b)
{
	return (a >= b) ? a : b;
}

// *************
// Random number
void setSeed()
{
    srand(time(NULL));
}

int getRandom(int max, int exc)
{
    return rand() % max + exc;
}
// *************