#include <iostream>
using namespace std;

void print1(int n)
{
	if(n!=0)
	{
		cout << "*" << " ";
		n--;
		
		print1(n);
	}
	else
	{	
		cout << "\n";
		cout << "Done!";
	}
	
}


int main()
{
	int a;
	
	cout << "Enter an integer: ";
	cin >> a;
	
	print1(a);
	
}
	