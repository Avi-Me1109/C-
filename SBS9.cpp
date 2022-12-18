#include <iostream>
using namespace std;

int main()
{
	int divisioncount;
	
	for(int runinteger = 1; runinteger <= 999999; runinteger++)
	{
		divisioncount = 0;
		for(int i=1; i<= runinteger; i++)
		{
			if(runinteger % i == 0)
				divisioncount++;
		}
		
		if(divisioncount == 2)
			cout << runinteger << " is a prime number\n";
		
		else
			cout << runinteger << " is not a prime number\n";
	}
	
}
