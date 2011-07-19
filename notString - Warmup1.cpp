//Link to Java version - http://codingbat.com/prob/p191914
//Both these are needed for cin.get(); which is there to prevent auto-closing when the program is finished,
//and cout, to test out stuff :). String is needed for this excercise.
#include <iostream>
#include <string>
using namespace std;

string notString(string str)
{
	string strCheck = str.substr(0, 3);
	if (strCheck == "not") //assumes lowercase 'not' before the string.
	{
		return str;
	}
	else
	{return "not " + str;}
}

int main()
{
	//Testing
	cout << notString("candy") << endl;
	cout << notString("x") << endl;
	cout << notString("not bad") << endl;
	cout << notString("I can not eat") << endl;
	cin.get();
}
//Well, this one was rather tricky one, since I'm not really all that familiar with strings in C++.

//EDIT: So I did some checking out, and I found about substr, and decided to use it to extract the first 3 letters of
//the string, and check wherever it equals 'not' or doesn't. Perhaps there are better ways to do this, but this certainly
//works better than the first version (below), and this can be considered an answer to this excercise. 

////Code for search from - http://stackoverflow.com/questions/2340281/check-if-a-string-contains-a-string-in-c
//OLD CODE: (notString)
	/*if (string::npos != str.find("not",0, 3)) //NOTE: Assuming that not is in lowercase. It also assumes that not is in the							 
	{	   	      			    //beginning, meaning that this func. can be abused by putting not anywhere.
		 return str;
	}
	else	
	{
		return "not " + str; 	
	} */