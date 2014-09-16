// Game Stats 3.0
// Demonstrates constants

#include <iostream>
using namespace std;

int main()
{
	const int ALIEN_POINTS = 150; //const = constant; an 'unchangeable value' full CAPS usually represents a constant in code. You cannot assign a new value to constant otherwise it'll generate an error.
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;

    
    
	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY; //The var myDifficulty is set to easy (1) and is of type 'difficulty' so it can ONLY HOLD one of the values defined in the enumeration {...}. So it can only be defined as EASY, NORMAL, HARD, UNBEATABLE or 1, 2, 3, 4.

    //enumerators are a set of unsigned int constants. Novice being 0, easy being 1, etc.
    
    
    
	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
	shipCost myShipCost = BOMBER_COST;
	cout << "\nTo upgrade my ship to a Cruiser will cost " 
         << (CRUISER_COST - myShipCost) << " Resource Points.\n";

	return 0;
}
