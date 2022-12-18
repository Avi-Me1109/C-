#include <iostream>
using namespace std;

int main()
{
	int integer;
	
	cout << "Enter an integer from 0 to 10,000: ";
	cin >> integer;
	
	if (integer % 2 == 0)
	{
		cout << integer << " is an Even Number";
	}
	
	else
	{
		cout << integer << " is NOT an Even Number.";
	}
	
}

