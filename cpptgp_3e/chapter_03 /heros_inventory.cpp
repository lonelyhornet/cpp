// Hero's Inventory
// Demonstrates arrays

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MAX_ITEMS = 10; //sets the variable of MAX_ITEMS as a constant and an integer.
    string inventory[MAX_ITEMS]; //declare array's size.

    int numItems = 0;
    inventory[numItems++] = "sword"; //Assigns 'sword' to position 0 of the array as the operator is a postfix increment (after the asignment to the array). This sets to the numItems to 3 when the code finishes, while still setting sword to position 0, armor to 1, and shield to 2.
    inventory[numItems++] = "armor";
    inventory[numItems++] = "shield";

    cout << "Your items:\n";
    for (int i = 0; i < numItems; ++i) //loops around until i == numItems, outputting out each item to console.
	{
        cout << inventory[i] << endl;
	}
    
    cout << "\nYou trade your sword for a battle axe.";
    inventory[0] = "battle axe"; //Reassigns position 0 in the array (sword) to battle axe
    cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i) //repeats the string indexing loop.
	{
        cout << inventory[i] << endl;
	}
    
    cout << "\nThe item name '" << inventory[0] << "' has "; //inventory[0] being 'battle axe' as thats the position in the array it's in.
    cout << inventory[0].size() << " letters in it.\n"; //calls the size of the member function of the element inventory[0], being battle axe.

    cout << "\nYou find a healing potion.";
    if (numItems < MAX_ITEMS)
	{
        inventory[numItems++] = "healing potion"; //if numItems is less than MAX_ITEMS, it will add a new string object to the array, named 'healing potion' and assigns that to 3 (the 4th item, as the array starts with 0)
	}
    else
	{
        cout << "You have too many items and can't carry another."; //if number of items in the inventory == MAX_ITEMS it will tell you that you have too many items.
	}
    cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i) //string indexing loop, you now have a healing potion!
	{
        cout << inventory[i] << endl;
	}
	
	return 0;
}
