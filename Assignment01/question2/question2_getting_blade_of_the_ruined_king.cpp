#include "question2_getting_blade_of_the_ruined_king.h"

unsigned int GettingBladeOfTheRuinedKing(unsigned int MyGold){
	string items[] = {"Dagger", "Dagger", "Recurve Bow", "Long Sword", "Long Sword", "Vampiric Scepter", "Bilgewater Cutlass", "Blade of the Ruined King"}; //Initialise an array of items that can be bought in purchase order.
	int costs[] = {300, 600, 400, 350, 700, 550, 350, 700}; //Initialise an array of the costs of the items that can be bought.
	cout << (MyGold >= 50 ? "You can buy: " : "You cannot buy any item.") << endl; //Output the appropriate string based on inputted amount of gold.
	for(int i = 0; i < 8; i++){ //For i = 0 to i = 7...
		if(MyGold >= costs[i] && !((i == 0 || i == 3) && MyGold >= costs[i + 1])){ //If MyGold >= cost of the current item and index is not 0 or 3 when MyGold >= cost of the next item... //2nd operand prevents duplicated purchase of the same item at a higher cost.
			MyGold -= costs[i]; //Deduct cost of item purchased from MyGold.
			cout << ((i == 1 || i == 4) ? "2 " : "A ") << items[i] << ((i == 1 || i == 4) ? "s (" : " (") << costs[i] << " Gold).\n"; //Output qty, name and cost of an item purchased.
		}
	}
	if(MyGold >= 50){ //If MyGold more than or equals to 50...
		cout << "A Health Potion (50 Gold)." << endl; //Output that Health Potion has been purchased.
		MyGold -= 50; //Deduct cost of Health Potion from MyGold.
	}
	return MyGold; //Return amount of gold left.
}