#ifndef RANDOMIZER_H
#define RANDOMIZER_H

class Randomizer {
	private:
		unsigned int number;
	public:
		static Randomizer();
		unsigned int randomBetween(unsigned int minimum, unsigned int maximum);
		unsigned int get_num();

};

#endif
