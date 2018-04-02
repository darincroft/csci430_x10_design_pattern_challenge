#ifndef RANDOMIZER_H
#define RANDOMIZER_H

class Randomizer {
	private:
		unsigned int number;
	public:
		Randomizer();
		unsigned int randomBetween(unsigned int minimum, unsigned int maximum);

};

#endif
