//Link to Java version - http://codingbat.com/prob/p184004
//Both these are needed for cin.get(); which is there to prevent auto-closing when the program is finished,
//and cout, to test out stuff :).
#include <iostream>
using namespace std;

bool nearHundred(int n)
{
	return (n <= 99 && n >= 90) || (n <= 199 && n >= 190);
}

int main()
{
	//Testing
	cout << nearHundred(93);
	cout << nearHundred(90);
	cout << nearHundred(89);
	cin.get();
}
//It werks. and you don't even have to use some Math.abs thing. 
//I find my version better, as it doesn't need some random Math.abs() thing which is Java-only.