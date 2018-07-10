//Link to Java version - http://codingbat.com/prob/p151713
//Using "stdafx.h" header because the code was written in Visual Studio
//String & iostream header are needed for this exercise

#include "stdafx.h"
#include <iostream>
#include <string>

bool mixStart(std::string str) {
	if (str.length() > 2) {
		return str.substr(1, 2) == "ix";
	}
	return false;
}

int main()
{
	//Testing
	std::cout << mixStart("mix snacks") << '\n'		//1
		<< mixStart("pix snacks") << '\n'			      //1
		<< mixStart("piz snacks") << '\n'			      //0
		<< mixStart("nix") << '\n'					        //1
		<< mixStart("ni") << '\n'					          //0
		<< mixStart("n") << '\n'					          //0
		<< mixStart("");							              //0

	return 0;
}

/*
	If the string is shorter than 3 chars, it cannot meet
	the criteria and the function returns false. It also
	prevents the error, which would be caused by parsing 
	shorter string.
 */
