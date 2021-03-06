// Link to Java version - http://codingbat.com/prob/p183592
// Using "stdafx.h" header because the code was written in Visual Studio
//String & iostream header are needed for this exercise

#include "stdafx.h"
#include <iostream>
#include <string>

std::string front22(std::string str) {
	if (str.length() > 2) {
		std::string first = str.substr(0, 2);	//Takes first two characters of the string
		return first + str + first;				//Appends 3 strings into one
	}
	return str + str + str;						//Returns 3 times whatever was in the string
}

int main()
{
	//Testing
	std::cout << front22("kitten") << '\n'	//kikittenki
		<< front22("Ha") << '\n'			//HaHaHa
		<< front22("abc") << '\n'			//ababcab
		<< front22("ab") << '\n'			//ababab
		<< front22("a") << '\n'				//aaa
		<< front22("") << '\n'				//
		<< front22("Logic") << '\n';		//LoLogicLo

	return 0;
}

/*
	This exercise was quite similar to front3, therefore
	I have decided to use the same logic as I used there.
 */
