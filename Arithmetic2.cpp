#include <iostream>
using namespace std;

int main()
{
	int x, y, z, sum, product, average;
	
	
	cout << "Please input first integer: ";
	cin >> x;
	
	cout << "Please input different second integer: ";
	cin >> y;
	
	cout << "Please input different third integer: ";
	cin >> z;
	
	sum = x + y + z;
	average = (x + y + z) / 3;
	product = x * y * z;
	
	cout << "The sum is: " << sum << "\n";
	cout << "The average is: " << average << "\n";
	cout << "The product is: " << product << "\n";
	
	if(x > y)
	{
		if (x > z)
		{
			cout << x << " is the largest number\n";
		}
		else
		{
			cout << z << " is the largest number\n";
		
		}
	
	}
	
	else if (y > x)
	{
		if (y > z)
		{
			cout << y << " is the largest number\n";
		}
		
		else
		{
			cout << z << " is the largest number\n";
		}
		
	}
	
	else
	{
		cout << z << " is the largest number.\n";
	
	}
	
		
	if(x < y)
	{
		if (x < z)
		{
			cout << x << " is the smallest number\n";
		}
		else
		{
			cout << z << " is the smallest number\n";
		
		}
	
	}
	
	else if (y < x)
	{
		if (y < z)
		{
			cout << y << " is the smallest number\n";
		}
		
		else
		{
			cout << z << " is the smallest number\n";
		}
		
	}
	
	else
	{
		cout << z << " is the smallest number.\n";
	
	}

}

