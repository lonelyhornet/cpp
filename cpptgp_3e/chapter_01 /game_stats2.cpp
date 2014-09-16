// Game Stats 2.0
// Demonstrates arithmetic operations with variables

#include <iostream>
using namespace std;

int main()
{
	unsigned int score = 5000;
	cout << "score: " << score << endl;

            //altering the value of a variable
	//score = score + 100;
	//cout << "score: " << score << endl;   - '+ 100' not used, use +=

	//combined assignment operator
	score += 100;
	cout << "score: " << score << endl;

	//increment operators
	int lives = 3;
	++lives;  //Increment operator: increases variable by 1 using the '++'
	cout << "lives: "   << lives << endl;

	lives = 3;
	lives++;
	cout << "lives: "   << lives << endl;

	lives = 3;
	int bonus = ++lives * 10; //prefix increments before evaluation - increments first then *'s by 10.
	cout << "lives, bonus = " << lives << ", " << bonus << endl;

	lives = 3;
	bonus = lives++ * 10; //postfix increments after evaluation - increments lives after lives * 10 (=30)
	cout << "lives, bonus = " << lives << ", " << bonus << endl;
    
    //When incrementing / decrementing a value beyond its max value it wraps around, eg. if you increment a score of 4294967295 it would equal 0.
    

	//integer wrap around
	score = 4294967295;
	cout << "\nscore: " << score << endl;
	++score;
	cout << "score: "   << score << endl;

	return 0;
}


//P24-
