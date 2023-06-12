#include "main.h"

void main(){
	char Part1Input, Part1Output;
	cout << "Question 1" << "\n\n";
	while(1){
		cout << "Input a character: ";
		cin >> Part1Input;
		if(Part1Input == '~'){
			cout << "Bye Bye~" << "\n\n";
			break;
		}
		Part1Output = ConvertIt(Part1Input);
		cout << Part1Input << " converts to " << Part1Output << "\n\n";
	}

	unsigned int Gold, LeftoverGold;
	cout << "Question 2" << "\n\n";
	while(1){
		cout << "How much gold do you have: ";
		cin >> Gold;
		if(Gold == 0 || Gold > 65535){
			cout << "Bye Bye~" << "\n\n";
			break;
		}
		LeftoverGold = GettingBladeOfTheRuinedKing(Gold);
		cout << "Returns " << LeftoverGold << "\n\n";
	}

	unsigned int Part3Number;
	bool Part3Prime;
	cout << "Question 3" << "\n\n";
	while(1){
		cout << "Input an integer to test for primality: ";
		cin >> Part3Number;
		if(Part3Number == 0 || Part3Number > 65535){
			cout << "Bye Bye~" << "\n\n";
			break;
		}
		Part3Prime = IsPrime(Part3Number);
		cout << Part3Number << " is " << (Part3Prime ? "" : "not ") << "a prime number." << "\n\n";
	}

	unsigned int Part4Number;
	bool Part4Result;
	cout << "Question 4" << "\n\n";
	while(1){
		cout << "Input a number for the sum of squares: ";
		cin >> Part4Number;
		if(Part4Number == 0){
			cout << "Bye Bye~" << "\n\n";
			break;
		}
		Part4Result = IsSumOf2Squares(Part4Number);
		cout << "Returns " << (Part4Result ? "TRUE" : "FALSE") << "\n\n";
	}

	unsigned int Number, NumDigits;
	cout << "Question 5" << "\n\n";
	while(1){
		cout << "Input a number: ";
		cin >> Number;
		if(Number == 0){
			cout << "Bye Bye~" << "\n\n";
			break;
		}
		NumDigits = DivideExactly(Number);
		cout << "Returns " << NumDigits << "\n\n";
	}
	system("pause");
}