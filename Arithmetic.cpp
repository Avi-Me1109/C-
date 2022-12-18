#include <iostream>
using namespace std;

int main()
{
	int x, y, sum, product, difference;
	
	cout << "Enter your first number ";
	cin >> x;
	
	cout << "Enter your second number ";
	cin >> y;
	
	sum = x + y;
	product = x * y;
	difference = x - y;
	
	cout << "The sum is " << sum << "\n";
	cout << "The product is " << product << "\n";
	cout << "The difference is " << difference << "\n";
	
	return 0;

}

