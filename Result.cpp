#include < iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	float result;
	
	a = 100;
	b = 2;
	c = 25;
	d = 4;
	
	result = a - b;
	
	cout << "a - b = " << result << "\n";
	
	result = b * c;
	
	cout << "b * c = " << result << "\n";
	
	result = a / c;
	
	cout << "a / c = " << result << "\n";
	
	result = a + b * c;
	
	cout << "a + b * c = " << result << "\n";

	result = a * b + c * d;
	
	cout << "a * b + c * d = " << result << "\n";
	
}

