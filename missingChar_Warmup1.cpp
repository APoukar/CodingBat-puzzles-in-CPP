// Link to Java version - http://codingbat.com/prob/p190570
// Using "stdafx.h" header because the code was written in Visual Studio
// String & iostream  header are needed for this exercise

#include "stdafx.h"
#include <iostream>
#include <string>

std::string missingChar(std::string str, int n) {
	return str.substr(0, n) + str.substr(n + 1);
}

int main()
{
	//Testing
	std::cout << missingChar("kitten", 1) << std::endl		//ktten
		<< missingChar("kitten", 0) << std::endl			//itten
		<< missingChar("kitten", 4) << std::endl			//kittn
		<< missingChar("Hi", 0) << std::endl				//i
		<< missingChar("Hi", 1) << std::endl				//H
		<< missingChar("code", 1);							//cde

    return 0;
}

/*
	This is rewritten from a function I have already wrote in Java. It's similar to 
	the solution at CodingBat site, but a bit shorter as I have used substr() function 
	right in the return statement. Another (shorter and more suitable) solution would be:

	std::string missingChar(std::string str, int n) {
	return str.erase(n, 1);
	}

	n - the position of the first character you want to erase
	1 - the number of characters you want to erase
 */
