// Link to Java version - http://codingbat.com/prob/p161642
// Using "stdafx.h" header because the code was written in Visual Studio
// String & iostream header are needed for this exercise

#include "stdafx.h"
#include <iostream>
#include <string>

std::string backAround(std::string str) {
	char lastChar = str.back();
	return lastChar + str + lastChar;
}

int main()
{
	//Testing
	std::cout << backArountd("cat") << '\n'		//tcatt
		<< backArountd("Hello") << '\n'			//oHello
		<< backArountd("a") << '\n'				//aaa
		<< backArountd("abc") << '\n'			//cabcc
		<< backArountd("read") << '\n'			//dreadd
		<< backArountd("boo") << '\n';			//obooo

	return 0;
}

/*
	This one was quite easy, std::string::back function
	returns the last character of a string.
 */
