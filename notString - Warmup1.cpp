//Link to Java version - http://codingbat.com/prob/p191914
//Both these are needed for cin.get(); which is there to prevent auto-closing when the program is finished,
//and cout, to test out stuff :). String is needed for this excercise.
#include <iostream>
#include <string>
using namespace std;

string notString(string str)
{
	if (string::npos != str.find("not")) //NOTE: Assuming that not is in lowercase. It also assumes that not is in the							 
	{				     //beginning, meaning that this func. can be abused by putting not anywhere.
		 return str;
	}
	else
	{
		return "not " + str; 	
	}
}

int main()
{
	//Testing
	cout << notString("candy") << endl;
	cout << notString("x") << endl;
	cout << notString("not bad") << endl;
	cin.get();
}
//Well, this one was rather tricky one, since I'm not really all that familiar with strings in C++.
//Code for search from - http://stackoverflow.com/questions/2340281/check-if-a-string-contains-a-string-in-c
//Seriously though, I'm sure that there are WAY better ways of doing this, but as I said - I haven't worked
//with the string lib. long enough, to know how it works. So yeah - I would call this a quick hack, rather than
//an actual solution.