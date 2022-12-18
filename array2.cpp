#include <iostream>
using namespace std;

int main()
{
	
	int array [] = {19, 2, 5, 4, 10};
	for (int i = 0; i <= 4; i++)
	{
		for (int i = 0; i <= 4; i++)
		{
			int temp;
			if(array[i+1] > array[i])
			{
				temp = array [i+1];
				array[i+1] = array[i];
				array[i] = temp;
			}
		}
	}
	
	for(int i = 0; i <= 4; i++)
		cout << array[i] << "\n";
	
}


	
	
	