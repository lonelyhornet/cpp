// String Tester
// Demonstrates string objects

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word1 = "Game"; //string objects store a sequence of chars
    string word2("Over");
    string word3(3, '!'); //repeats '!' 3 times, as it is a string object.

    string phrase = word1 + " " + word2 + word3;
    cout << "The phrase is: " << phrase << "\n\n";

    cout << "The phrase has " << phrase.size() << " characters in it.\n\n"; //'.' is the member call operator.

    cout << "The character at position 0 is: " << phrase[0] << "\n\n"; //the char sequence starts at 0, and goes 0,1,2,3,4 etc.

    cout << "Changing the character at position 0.\n";
    phrase[0] = 'L'; //reassigns the first character in the sequence
    cout << "The phrase is now: " << phrase << "\n\n";

	for (unsigned int i = 0; i < phrase.size(); ++i)
	{
        cout << "Character at position " << i << " is: " << phrase[i] << endl;
	}

    cout << "\nThe sequence 'Over' begins at location "; 
    cout << phrase.find("Over") << endl; //finds the char string 'over' in the phrase.

    if (phrase.find("eggplant") == string::npos) //string::npos constant is the largest possible size of a string object, so it's greater than any possible valid position number.
	{
        cout << "'eggplant' is not in the phrase.\n\n";
	}

    phrase.erase(4, 5);
    cout << "The phrase is now: " << phrase << endl; //the erase() allows the removal of character substrings, it removes the 5 character substring located at position 4 (starting).

    phrase.erase(4);
    cout << "The phrase is now: " << phrase << endl; //removes everything after position 4.

    phrase.erase();
    cout << "The phrase is now: " << phrase << endl;

    if (phrase.empty()) //.empty() returns a bool value
	{
        cout << "\nThe phrase is no more.\n";
	}

	return 0;
}
