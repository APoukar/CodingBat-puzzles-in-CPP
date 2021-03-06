// Link to Java version - http://codingbat.com/prob/p123384
// Using "stdafx.h" header because the code was written in Visual Studio
// String, iostream and utility  header are needed for this exercise

#include "stdafx.h"
#include <iostream>
#include <string>
#include <utility>

std::string frontBack(std::string str) {
	int length = str.length();
	if (length > 1) {
		std::swap(str[0], str[length - 1]);
	}
	return str;
}

int main()
{
	//Testing
	std::cout << frontBack("code") << '\n'	//eodc
		<< frontBack("a") << '\n'			//a
		<< frontBack("ab") << '\n'			//ba
		<< frontBack("abc") << '\n'			//cba
		<< frontBack("") << '\n'			//
		<< frontBack("Chocolate") << '\n'	//ehocolatC
		<< frontBack("ppC") << '\n'			//Cpp
		<< frontBack("hello") << '\n';		//oellh

    return 0;
}

/*
	Function std::swap allows you to switch the position of two
	characters in the string. It takes postition of those two
	characters in the string as an arguments.
 */
