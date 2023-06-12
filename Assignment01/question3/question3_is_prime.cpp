#include "question3_is_prime.h"

bool IsPrime(unsigned int MyNumber){
	bool prime = MyNumber - 1; //Make prime = false if input is 1 and prime = true for other valid inputs.
	for(int a = 2; a < sqrt(MyNumber); a++){ //For a = 2 to a = MyNumber - 1...
		if(MyNumber % a == 0){ //If the input is composite...
			prime = 0; //Make prime = false.
			cout << MyNumber << " = " << a << " x " << MyNumber / a << endl; //Print an e.g. that corroborates how the input is composite.
			break; //End the for loop once input is determined to be composite.
		}
	}
	return prime; //Return whether input is prime or not.
}