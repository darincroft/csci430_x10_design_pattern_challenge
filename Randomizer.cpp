#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
#include "Randomizer.h"

Randomizer::Randomizer(){
	number = 0;
}

unsigned int Randomizer::randomBetween(unsigned int minimum, unsigned int maximum){
	srand(time(0));  // Initialize random number generator
	number = (rand() % maximum) + minimum;
}
