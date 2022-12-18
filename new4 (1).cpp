#include <iostream>
using namespace std;

int main()
{
	int x, y;
	
	cout << "Enter two numbers: ";
	cin >> x >> y;
	
	cout << "The sum is " << x + y << "\n";
	cout << "The product is " << x * y << "\n";
	if (x > y)
		cout << "The difference is " << x - y << "\n";
	
	if(x < y)
		cout << "The difference is " << y - x << "\n";
	else
		cout << "The difference is 0";	
}

