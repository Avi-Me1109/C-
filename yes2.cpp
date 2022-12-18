#include <iostream>
using namespace std;

int power(int a, int n)
{
	if(n!=0)
	{
		return (a*power(a, n-1));
	}
	
	else
	{
		return 1;
	}
}

int main()
{
	int x, y, result;
	
	cout << "Enter base number: ";
	cin >> x;
	
	cout << "Enter power number: ";
	cin >> y;
	
	result = power (x, y);
	
	cout << result;
}


		