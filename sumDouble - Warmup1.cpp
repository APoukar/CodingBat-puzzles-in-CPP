//Link to Java version - http://codingbat.com/prob/p154485
//Both these are needed for cin.get(); which is there to prevent auto-closing when the program is finished,
//and cout, to test out stuff :).
#include <iostream>
using namespace std;

int sumDouble(int a, int b)
{
	if (a == b)
	{return a*4;} //Well you COULD to (a*2)*2 or (a+b)*2, but hey - this is shorter, and it works the same!
	else 
	{return a+b;}
}

int main()
{		
	//Code to test this code.
	cout << sumDouble(1,2);
	cout << sumDouble(3,2);
	cout << sumDouble(2,2);
	cin.get();
}
//Note - the original solution does things differently - it adds the numbers, checks if they are equal,
and if they are then the program doubles the number. I kind of preffer this approach though 
(which is similar to answers in first puzzles).