// Counter
// Demonstrates for loops

#include <iostream>

using namespace std;

int main()
{
    cout << "Counting forward:\n";
    for (int i = 0; i < 10; ++i) //sets i to 0, then if its less than 10 increments it by 1. Continues until it reaches 10
	{
        cout << i << " ";
	}

    cout << "\n\nCounting backward:\n";
    for (int i = 9; i >= 0; --i)
	{
        cout << i << " ";
	}

    cout << "\n\nCounting by fives:\n";
    for (int i = 0; i <= 50; i += 5) //when its less than or equal to 50, increments variable i by 5 (adds 5 each time).
	{
        cout << i << " ";
	}

    cout << "\n\nCounting with null statements:\n";
    int count = 0;
    for ( ; count < 10; ) //uses empty statements as initialised count beforehand and incremented it inside the loop body.
    {
        cout << count << " ";
        ++count;
    }

    cout << "\n\nCounting with nested for loops:\n";
    const int ROWS = 5; //executes loop body 'ROWS' 5 times, each time executing the 'COLUMNS' loop body twice as the columns body is inside the rows body. So it executes ROWS, then goes to COLUMNS, then COLUMNS loops until j < columns is false, then ends, then repeats the ROWS body, then columns twice again.
    const int COLUMNS = 3;
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLUMNS; ++j) //repeats until j < columns is false, ends entire block and restarts.
		{
            cout << i << "," << j << "  ";
		}

        cout << endl;
    }

	return 0;
}


//P84
