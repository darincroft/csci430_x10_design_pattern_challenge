#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
#include "Randomizer.h"

Randomizer::Randomizer(){
	number = 0;
	srand(time(0));  // Initialize random number generator
}

unsigned int Randomizer::randomBetween(unsigned int minimum, unsigned int maximum){
	number = (rand() % maximum) + minimum;
	return number;
}

unsigned int Randomizer::get_num(){
	return number;
}
