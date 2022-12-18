#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main()
{
	int dicethrow, face1 = 0, face2 = 0, face3 = 0, face4 = 0, face5 = 0, face6 = 0;
	srand(time(0));
	
	for(int i = 1; i <= 6000000; i++)
		{
			dicethrow = rand()%6 + 1;
	
			if(dicethrow == 1)
				face1++;
			
			if(dicethrow == 2)
				face2++;
			
			if(dicethrow == 3)
				face3++;
			
			if(dicethrow == 4)
				face4++;
			
			if(dicethrow == 5)
				face5++;
			
			if(dicethrow == 6)
				face6++;
				
		}
	cout << "Face" << "\t" << "Frequency" << "\n";
	cout << "   1" << "\t" << face1 << "\n";
	cout << "   2" << "\t" << face2 << "\n";
	cout << "   3" << "\t" << face3 << "\n";
	cout << "   4" << "\t" << face4 << "\n";
	cout << "   5" << "\t" << face5 << "\n";
	cout << "   6" << "\t" << face6 << "\n";
	

}


