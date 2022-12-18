#include <iostream>
using namespace std;

 int pow_mine (int a, int b){
	int i = 1;
	
	while (i < b)
	{
		a = a * a;
		
		i ++;
	}
	
	return a;
}


int main()
{
	int base, power, answer;
	
	cout << "Enter base number: ";
	cin >> base;
	
	cout << "Enter power number: ";
	cin >> power;
	
	answer = pow_mine (base, power);
	
	cout << "The answer is: " << answer;
}


	