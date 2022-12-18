#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main()
{
	int dicethrow, seed;
	
	cout << "Enter seed: ";
	cin >> seed;
	
	srand(seed);
	
	for (int i = 1; i <=2; i++)
	{
		for(int i = 1; i <= 5; i++)
		{
			dicethrow = rand()%6 + 1;
	
			cout << dicethrow << "\t";
		}
		
		cout << "\n";
	}

}


