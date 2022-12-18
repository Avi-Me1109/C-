#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void finder (int number)
{
	
	switch (number)
	{
		case 1:
			cout << "Heads";
			break;
			
		case 0:
			cout << "Tails";
			break;
	}
}


			


int main()
{
	int determiner;
	srand(time(0));
	
	determiner = rand() % 2;
 
	finder(determiner);

}

