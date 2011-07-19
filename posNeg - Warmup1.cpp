//Link to Java version - http://codingbat.com/prob/p159227
//Both these are needed for cin.get(); which is there to prevent auto-closing when the program is finished,
//and cout, to test out stuff :).
#include <iostream>
using namespace std;

bool posNeg(int a, int b, bool negative)
{
	if (negative == true)
	{
		if (a < 0 && b < 0)
		{return true;}
		else {return false;}
	}
	else
	{
		if (a < 0 || b < 0)
		{return true;}
		else {return false;}
	}

}

int main()
{
	//Testing
	cout << posNeg(1, -1, false);
	cout << posNeg(-1, 1, false);
	cout << posNeg(1, 1, false);
	cout << posNeg(-1, -1, false);
	cout << posNeg(1, -1, true);
	cout << posNeg(-1, 1, true);
	cout << posNeg(1, 1, true);
	cout << posNeg(-1, -1, true);
	cin.get();
}
//I gotta admit, I was confused at first, and didn't think of shortening my code when I completed it.
//Oh well. On unrelated note - the testing part results in 11010001 which is valid binary.