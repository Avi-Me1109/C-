#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, l, s;
	l = -10000000;
	s = 10000000;
	
	cout << "All integers should be above -10000000 and below 10000000\n";
	cout << "Enter your first integer: ";
	cin >> a;
	cout << "Enter your second integer: ";
	cin >> b;
	cout << "Enter your third integer: ";
	cin >> c;
	cout << "Enter your fourth integer: ";
	cin >> d;
	cout << "Enter your fifth integer: ";
	cin >> e;
	
	if (a > l)
		l = a;
	
	if (b > l)
		l = b;
	
	if (c > l)
		l = c;
	
	if (d > l)
		l = d;
	
	if (e > l)
		l = e;
	
	if (a < s)
		s = a;
	
	if (b < s)
		s = b;
	
	if (c < s)
		s = c;
	
	if (d < s)
		s = d;
	
	if (e < s)
		s = e;
	
	cout << l << " is the largest number\n";
	cout << s << " is the smallest number \n"; 
	
}

