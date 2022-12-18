#include <iostream>
using namespace std;

int main()
{
	int count = 0, sum = 0, number;
	
	while (count < 6)
	{
		cout << "Enter integer: \n";
		cin >> number;
		
		sum = sum + number;
		
		count = count++;
	}
	
	cout << "The sum of the five numbers is: " << sum;
	
}

