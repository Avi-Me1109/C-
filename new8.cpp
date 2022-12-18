#include <iostream>
using namespace std;

int main()
{
	int a = 25, b = 5, c = 10, d = 7, result;
	
	result = a % b;
	cout << "a % b = " << result << "\n";
	
	result = b % c;
	cout << "b % c = " << result << "\n";
	
	result = a % d;
	cout << "a % d = " << result << "\n";
	
	result = a / d * d + a % d;
	cout << "a / d * d + a % d = " << result << "\n";
}

