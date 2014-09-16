// Die Roller
// Demonstrates generating random numbers

#include <iostream>
#include <cstdlib> //includes functions that deal with generating random numbers.
#include <ctime> //seeds random number generator with current time.

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));  // seed random number generator based on current time, this makes the number more random, as instead of generating the same series of random numbers, it starts with a truly random one. static_cast 'casts' this value to unsigned int.

	int randomNumber = rand(); // generate random number

	int die = (randomNumber % 6) + 1; // get a number between 1 and 6, as any positive number divided by 6 will give a number between 0 & 5, then add 1 to make it any number between 1 & 6.
	cout << "You rolled a " << die << endl;

    return 0;
}

//P70