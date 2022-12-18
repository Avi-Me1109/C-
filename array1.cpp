#include <iostream>
using namespace std;

int main()
{
	int index[9] = {0,0,0,0,0,0,0,0}, number;
	char determiner;
	
	do{
		cout << "Current values of all the arrays are 0\n";
		cout << "Enter the position of the integer value you want to change (0 to 8): ";
		
		cin >> number;
		
		if (number == 0)
		{	
			cout << "Enter new value: ";
			cin >> index [0];
		}
		
		if (number == 1)
		{	
			cout << "Enter new value: ";
			cin >> index [1];
		}
		
		if (number == 2)
		{	
			cout << "Enter new value: ";
			cin >> index [2];
		}
		
		if (number == 3)
		{	
			cout << "Enter new value: ";
			cin >> index [3];
		}
		
		if (number == 4)
		{	
			cout << "Enter new value: ";
			cin >> index [4];
		}
		
		if (number == 5)
		{	
			cout << "Enter new value: ";
			cin >> index [5];
		}
		
		if (number == 6)
		{	
			cout << "Enter new value: ";
			cin >> index [6];
		}
		
		if (number == 7)
		{	
			cout << "Enter new value: ";
			cin >> index [7];
		}
		
		if (number == 8)
		{	
			cout << "Enter new value: ";
			cin >> index [8];
		}
		
		cout << "Do you want to change another value? (y or n): ";
		cin >> determiner;
		
	}while(determiner == 'y');	
		
	for(int i = 0; i < 9; i++)
		{
			cout << index[i] << "\n";
		}
	
}

