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
	bool aSmile = true;
	bool bSmile = true;
	cout << monkeyTrouble(aSmile,bSmile);
	aSmile = false;
	bSmile = false;
	cout << monkeyTrouble(aSmile,bSmile);
	aSmile = true;
	cout << monkeyTrouble(aSmile,bSmile);
	cin.get();
}

//Well, my version was a bit longer then the very short version, but it's pretty much the same thing really.
//Also my testing part is a bit different than the one in the monkeyTrouble page, because I wrote 