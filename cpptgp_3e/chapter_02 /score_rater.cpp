// Score Rater
// Demonstrates the if statement

#include <iostream>
using namespace std;

int main()
{
	if (true) //careful not to use a ';' after the ) otherwise it'll create an empty statement thats associated with the if statement, rendering the if statement useless.
	{
		cout << "This is always displayed.\n\n";
	}
    
	if (false)
	{
		cout << "This is never displayed.\n\n";
	}
    
	int score = 1000;
    
	if (score)
	{
		cout << "At least you didn't score zero.\n\n";
	}
	
	if (score >= 250)
	{
        cout << "You scored 250 or more. Decent.\n\n";
	}
    
    if (score >= 500)
    {
        cout << "You scored 500 or more. Nice.\n\n";
        
        if (score >= 1000) //this is called 'nesting', having an if statement inside another if statement.
		{
            cout << "You scored 1000 or more. Impressive!\n";
		}
    }
    
    return 0;
}
//P42-45
