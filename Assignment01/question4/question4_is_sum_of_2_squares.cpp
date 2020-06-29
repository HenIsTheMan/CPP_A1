#include "question4_is_sum_of_2_squares.h"

bool IsSumOf2Squares(unsigned int MyNumber){
	map<int, int> storage; //Declare a map called storage which takes integers for its key values and mapped values
	for(int i = 0; i <= sqrt(MyNumber); i++){ //For i = 0 to i = square root of MyNumber...
		storage[i * i] = 1; //Stores 1 (element) with a perfect square (key) in the map.
		if(storage.find(MyNumber - i * i) != storage.end()){ //If MyNumber - i * i exists as a key in storage... 
			cout << MyNumber << " = " << sqrt(MyNumber - i * i) << "^2 + " << i << "^2" << endl; //Print how input can be expressed as the sum of 2 squares.
			return 1; //Return 1 if input can be expressed as the sum of 2 squares.
		}
	}
	return 0; //Return 0 if input cannot be expressed as the sum of 2 squares.
}