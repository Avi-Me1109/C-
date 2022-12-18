#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	
	a = 25;
	b = 5;
	c = 10;
	d = 7;
	
	cout << "a % b = " << a%b << "\n";
	cout << "b % c = " << b%c << "\n";
	cout << "a % d = " << a%d << "\n";
	cout << "a / d * d + a % d = " << a / d * d + a % d << "\n";
	
	return 0;
}
