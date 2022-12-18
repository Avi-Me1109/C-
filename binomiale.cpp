#include <iostream>
using namespace std;

int main()
{
	int integer, i, accuracy=0;
	double factorial = 0;
	integer = 1;
	
	while (accuracy < 3)
	{
		while (integer > 0)
		{
			factorial = factorial * integer;
		
			integer--;
		
			cout << factorial;
		}
		
		//factorial = factorial + 1/factorial;
		
		//accuracy = accuracy++;
		
		integer = integer++;
	}
	
	
	
	
	cout << "The factorial is " << factorial;
	
}

