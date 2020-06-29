#include "question1_convert_it.h"

char ConvertIt(char MyOneCharacter){
	if(int(MyOneCharacter) >= 48 && int(MyOneCharacter) <= 57){ //If MyOneCharacter is a number...
		return (int(MyOneCharacter) & 1 ? '_' : '#'); //Return '_' if MyOneCharacter is odd and '#' if MyOneCharacter is not odd (i.e. if MyOneCharacter is 0 or an even integer).
	} else if((int(MyOneCharacter) >= 65 && int(MyOneCharacter) <= 90) || (int(MyOneCharacter) >= 97 && int(MyOneCharacter) <= 122)){ //If MyOneCharacter is a letter...
		char vowels[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'}; //Initialise an array of uppercase and lowercase vowels.
		for(int i = 0; i < sizeof(vowels); i++){ //For i = 0 to i = 9...
			if(MyOneCharacter == vowels[i]){ //If MyOneCharacter is a vowel...
				return '*'; //Return '*'.
			}
		}
		return char(int(MyOneCharacter) + 32 * ((int(MyOneCharacter) < 97) - (int(MyOneCharacter) > 90))); //Return MyOneCharacter with its casing converted if it is not a vowel.
	}
	return MyOneCharacter; //Return MyOneCharacter if it is none of the above.
}