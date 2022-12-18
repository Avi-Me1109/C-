#include <iostream>
using namespace std;



int main()
{
	for(int i = 10; i >= 1; i--)
	{
		for(int a = 10; a >= i; a--)
		{
			cout << "*";
		}
		
		cout << "\n";
	}
}

