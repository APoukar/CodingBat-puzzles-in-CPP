//Link to Java version - http://codingbat.com/prob/p182873
//Both these are needed for cin.get(); which is there to prevent auto-closing when the program is finished,
//and cout, to test out stuff :).
#include <iostream>
using namespace std;

bool makes10(int a, int b)
{
	return (a == 10 || b == 10) || (a + b == 10);
}

int main()
{
	//Testing
	cout << makes10(9,10);
	cout << makes10(9,9);
	cout << makes10(1,9);
	cin.get();
}
//The same thing as the solution. Thanks to a silly mistake, it took like 5 minutes to get it right :/