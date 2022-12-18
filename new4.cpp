#include <iostream>
using namespace std;

int main()
{
	int integer, i, factorial;
	
	cout << "Enter a nonnegative integer: ";
	cin >> integer;
	factorial = 1;
	
	while (integer > 0)
	{
		factorial = factorial * integer;
		
		integer--;
		
	}
	
	
	cout << "The factorial is " << factorial;
	
}

