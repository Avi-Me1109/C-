#include <iostream>
using namespace std;

int main()
{
	for(int runinteger = 2; runinteger <= 20; runinteger++)
	{
		if (runinteger % 3 ==0)
		{		
			if (runinteger % 5 ==0)
			cout << runinteger << " is divisible by 3 and 5.\n";
			
			else
			cout << runinteger << " is not divisible by 3 and 5.\n";
		}
		else
			cout << runinteger << " is not divisible by 3 and 5.\n";
	}
}


	
	