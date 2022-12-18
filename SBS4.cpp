#include <iostream>
using namespace std;

int main()
{
	int integer1, integer2, integer3, integer4, integer5;
	
	cout << "Enter 5 integers: ";
	cin >> integer1;
	cin >> integer2;
	cin >> integer3;
	cin >> integer4;
	cin >> integer5;
	
	cout << "\n";
	
	if (integer1 % 3 ==0)
		cout << integer1 << " is divisible by 3.\n";
	
	else
		cout << integer1 << " is not divisible by 3.\n";
	
	if (integer2 % 3 ==0)
		cout << integer2 << " is divisible by 3.\n";
	
	else
		cout << integer2 << " is not divisible by 3.\n";
	
	if (integer3 % 3 ==0)
		cout << integer3 << " is divisible by 3.\n";
	
	else
		cout << integer3 << " is not divisible by 3.\n";
	
	if (integer4 % 3 ==0)
		cout << integer4 << " is divisible by 3.\n";
	
	else
		cout << integer4 << " is not divisible by 3.\n";
	
	if (integer5 % 3 ==0)
		cout << integer5 << " is divisible by 3.\n";
	
	else
		cout << integer5 << " is not divisible by 3.\n";
}
