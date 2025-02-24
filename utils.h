#include <stdlib.h>                 // For srand/rand
#include <time.h>                   // For time()

int max(int, int);

// Sets seed for random num
void setSeed();

// Generates random number 
// max = Upper bound
// exc = Until what value to exclude (eg. exc = 1, means rand+1)
int getRandom(int max, int exc);