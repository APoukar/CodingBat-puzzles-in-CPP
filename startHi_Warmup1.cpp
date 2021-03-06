//Link to Java version - http://codingbat.com/prob/p191022
//Using "stdafx.h" header because the code was written in Visual Studio
//String & iostream header are needed for this exercise

#include "stdafx.h"
#include <iostream>
#include <string>

bool startHi(std::string str) {
	std::string find = "hi";
	return !str.find("hi");
}

int main()
{
	//Testing
	std::cout << startHi("hi there") << '\n'	//1
		<< startHi("hi") << '\n'				//1
		<< startHi("hello hi") << '\n'			//0
		<< startHi("he") << '\n'				//0
		<< startHi("h") << '\n'					//0
		<< startHi("") << '\n'					//0
		<< startHi("ho hi") << '\n'				//0
		<< startHi("ho hi") << '\n'				//0
		<< startHi("hi ho") << '\n';			//1

	return 0;
}

/*
	This is the simplest solution so far, but
	in C++20 there will be added new method 
	std::string::starts_with,which makes 
	the solution more readable.
 */
