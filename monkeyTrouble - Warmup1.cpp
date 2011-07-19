//Link to Java version - http://codingbat.com/prob/p181646
//Both these are needed for cin.get(); which is there to prevent auto-closing when the program is finished,
//and cout, to test out stuff :).
#include <iostream>
using namespace std;

bool monkeyTrouble(bool aSmile, bool bSmile)
{
	if (aSmile == bSmile)
	{return true;}
	else
	{return false;}
}
int main()
{		
	//Testing
	cout << monkeyTrouble(true,true);
	cout << monkeyTrouble(false,false);
	cout << monkeyTrouble(true,false);
	cin.get();
}

//Well, my version was a bit longer then the very short version, but it's pretty much the same thing really.