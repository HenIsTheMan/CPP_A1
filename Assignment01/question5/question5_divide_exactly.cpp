#include "question5_divide_exactly.h"

unsigned int DivideExactly(unsigned int MyNumber){
	int count = 0; //Initialisation of a var called count to track the number of digits in input that can divide it exactly.
	for(int i = 9; i >= 0; i--){ //For i = 9 to i = 0...
		if(MyNumber % int(pow(10, i + 1)) - MyNumber % int(pow(10, i)) == 0){ //Prevent division by 0. 
			continue; //Ignore the code below and run the for loop again with i updated (decremented in this case).
		}
		if(MyNumber % ((MyNumber % int(pow(10, i + 1)) - MyNumber % int(pow(10, i))) / int(pow(10, i))) == 0){ //If digit can divide input exactly...
			cout << (MyNumber % int(pow(10, i + 1)) - MyNumber % int(pow(10, i))) / int(pow(10, i)) << ", "; //Print digit that can divide input exactly.
			count++; //Increment count by 1.
		}
	}
	if(count > 0){ //If there are digits in input that can divide it exactly...
		cout << "\b\b" << " divide" << (count > 1 ? " " : "s ") << MyNumber << " exactly." << endl; //Remove the excess comma and print the appropriate text.
	}
	return count; //Return number of digits in input that can divide it exactly.
}