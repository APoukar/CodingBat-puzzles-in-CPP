// Link to Java version - http://codingbat.com/prob/p112564
// Using "stdafx.h" header because the code was written in Visual Studio
//Iostream header is needed for this exercise

#include "stdafx.h"
#include <iostream>

bool or35(int n) {
	return (n % 3 == 0 || n % 5 == 0);
}

int main()
{
	//Testing
	std::cout << or35(3) << '\n'	//1
		<< or35(10) << '\n'			//1
		<< or35(8) << '\n'			//0
		<< or35(15) << '\n'			//1
		<< or35(5) << '\n'			//1
		<< or35(9) << '\n'			//1
		<< or35(100) << '\n'		//1
		<< or35(122) << '\n'		//0
		<< or35(123) << '\n';		//1


	return 0;
}

/*
	Modulo (%) operator returns the remainder after division.
	It is often used when you wanna find out if the number
	is divisible by another number.
 */
