//Link to Java version - http://codingbat.com/prob/p116624
//Both these are needed for cin.get(); which is there to prevent auto-closing when the program is finished,
//and cout, to test out stuff :).
#include <iostream>
using namespace std;

int diff21(int n)
{
	if (n > 21)
	{return (n-21)*2;}
	else
	{return 21-n;}

}

int main()
{
	//Testing
	int n = 19;
	cout << diff21(n);
	n = 10;
	cout << diff21(n);
	n = 21;
	cout << diff21(n);
	n = 30;
	cout << diff21(n);
	cin.get();
}
//My version works the other way around than the solution in the site :D