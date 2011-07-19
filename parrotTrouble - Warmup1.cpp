//Link to Java version - http://codingbat.com/prob/p140449
//Both these are needed for cin.get(); which is there to prevent auto-closing when the program is finished,
//and cout, to test out stuff :).
#include <iostream>
using namespace std;

bool parrotTrouble(bool talking, int hour)
{
	if (talking == true)
	{
		if (hour < 7 || hour > 20)
			{return true;}
		else {return false;}
	}
	else {return false;}
	
}

int main()
{
	//Testing
	cout << parrotTrouble(true,6);
	cout << parrotTrouble(true,7);
	cout << parrotTrouble(false,6);
	cin.get();
}

//My version is slightly longer than the solution. Duh.