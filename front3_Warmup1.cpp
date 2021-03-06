// Link to Java version - http://codingbat.com/prob/p136351
// Using "stdafx.h" header because the code was written in Visual Studio
// String & iostream header are needed for this exercise

#include "stdafx.h"
#include <iostream>
#include <string>

std::string front3(std::string str) {
	if (str.length() > 2) {
		return str.substr(0, 3) + str.substr(0, 3) + str.substr(0, 3);
	}
	return str + str + str;
}

int main()
{
	//Testing
	std::cout << front3("Cpp") << '\n'		//CppCppCpp
		<< front3("Chocolate") << '\n'		//ChoChoCho
		<< front3("abcabcabc") << '\n'		//abcabcabc
		<< front3("abcXYZ") << '\n'			//abcabcabc
		<< front3("ab") << '\n'				//ababab
		<< front3("a") << '\n'				//aaa
		<< front3("") << '\n';				//

	return 0;
}

/*
	This is how I would solve the problem, but there are many other ways.
	I have written two more options for those who are interested.

	This function could be shorter due to one huge ternary operator:

	std::string front3(std::string str) {
		std::string result = (str.length() > 2) ? str.substr(0, 3) + str.substr(0, 3) + str.substr(0, 3) : str + str + str;
		return result;
	}

	Don't use long ternary operators though, it's a bad practice.
	Or it could be longer, solved with for/while loop:

	std::string front3(std::string str) {
	std::string result;
	int repeat = 3;
	if (str.length() > 2)
	{
		for (int i = 0; i < repeat; i++) {
			result.append(str.substr(0, 3));
		}
	}
	else if (!str.empty())	{
		for (int i = 0; i < repeat; i++) {
			result.append(str);
		}
	}
	else
	{
		result = "";
	}

	return result;
	}

 */
