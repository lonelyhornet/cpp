// Game Stats
// Demonstrates declaring and initializing variables

#include <iostream>
using namespace std;

int main()
{
	int score;          //integer
	double distance;    //double precision floating points
	char playAgain;     //characters
	bool shieldsUp;     //boolean; yes/no

	short lives, aliensKilled;  //short = reduces total number of values variable can hold, decreases storage space for variable
                                // can declare 2 variables of the same type in 1 statement, as shown above.

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
		
	double engineTemp = 6572.89;

	cout << "\nscore: "		<< score << endl;
	cout << "distance: "	<< distance << endl;
	cout << "playAgain: "	<< playAgain << endl;
    //skipping shieldsUp since you don't generally print Boolean values
	cout << "lives: "		<< lives << endl;
	cout << "aliensKilled: "<< aliensKilled << endl;
	cout << "engineTemp: "	<< engineTemp << endl;

	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;

	typedef unsigned short int ushort; //unsigned = can only store postive values.
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;

	return 0;
}


//P18-22 (23?)