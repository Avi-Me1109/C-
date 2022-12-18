#include <iostream>
using namespace std;

int factorial(int n){
	if(n>1)
		return n*factorial(n-1);
	else return 1;
}

int main()
{
	int a = 5, answer;
	
	for(int i = a; i > 1 ; i--)
	{
		answer = factorial(a);
	}
	
	cout << answer;
}

