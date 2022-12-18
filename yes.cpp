#include <iostream>
using namespace std;

void countdown (int a)
{
	if(a!=0)
	{
		cout << a << " ";
		a--;
		
		countdown (a);
	}
	
	else
	{	
		cout << "\n";
		cout << "Lift off!";
	}
}

int main()
{
	int n = 10;
	
	countdown (n);
}

