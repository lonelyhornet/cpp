// Designers Network
// Demonstrates logical operators

#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string username;
	string password;
	bool success;

	cout << "\tGame Designer's Network\n";

	do
	{
		cout << "\nUsername: ";
		cin >> username; 

		cout << "Password: ";
		cin >> password; 

		if (username == "S.Meier" && password == "civilization") //Means it needs that username and password
		{
			cout << "\nHey, Sid.";
			success = true; //sets the bool variable to true, which once true ends the do block
		}

		else if (username == "S.Miyamoto" && password == "mariobros")
		{
			cout << "\nWhat's up, Shigeru?";
			success = true;
		}

		else if (username == "W.Wright" && password == "thesims")
		{
			cout << "\nHow goes it, Will?";
			success = true;
		}

		else if (username == "guest" || password == "guest") //Means it can either username, password, or both. Typing the password as 'guess' when running the program, but having any username will login the user as 'guest'.
		{
			cout << "\nWelcome, guest.";
			success = true;
		}

		else
		{
			cout << "\nYour login failed.";
			success = false;
		}
	} while (!success); //means while there is no success, the do block keeps running. Statement becomes true when correct username / password is input, by the success = true; underneath each statement.

    return 0;
}


//P61-

/*
!       logical NOT     !expression
&&      Logical AND     expression1 && expression2
||      Logical OR      expression1 || expression2


 NOT has a higher precedence than AND, which has a higher precedence than OR.
 
 
 
 
*/