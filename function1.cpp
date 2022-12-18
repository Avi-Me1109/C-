#include <iostream>
using namespace std;

int comparenumber (int, int);
void shw_number (int, int, int);


int comparenumber  (int a, int b){
	
	int flag;
	
	if (a > b)
		flag = 1;
	
	if (b > a)
		flag = 2;
	
	if (b == a || a == b)
		flag = 0;
	
	return flag;
}




int main()
{
	int integer1, integer2, determiner;
	
	cout << "Enter first integer: ";
	cin >> integer1;
	
	cout << "Enter second integer: ";
	cin >> integer2;
	
	determiner = comparenumber (integer1, integer2);
	
	shw_number (determiner, integer1, integer2);
	
	return 0;
	
}

void shw_number (int val, int number1, int number2){
	if (val == 1)
		cout << number1 << " is larger than " << number2;
	
	if (val == 2)
		cout << number2 << " is larger than " << number1;
	
	if (val == 0)
		cout << number1 << " is the same as " << number2;
}



	
	