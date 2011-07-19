//Link to Java version - http://codingbat.com/prob/p187868
//Both these are needed for cin.get(); which is there to prevent auto-closing when the program is finished,
//and cout, to test out stuff :).
#include <iostream>
using namespace std;

bool sleepIn(bool weekday, bool vacation)
{
	return(!weekday || vacation);
}
int main()
{		
	//Testing
	cout << sleepIn(false,false);
	cout << sleepIn(true,false);
	cout << sleepIn(false,true);
	cin.get();
}

//This is really not that different from the Java version, except it's a bit shorter