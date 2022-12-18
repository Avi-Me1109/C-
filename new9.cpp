#include <iostream>
using namespace std;

int main()
{
	int array [] = {-12, 3, -12, 4, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12};
	int a1[14], a2[14];
	const int n = 14;
	int visited[n];
	int count;
	
	for(int i =0; i < n; i++)
	{
		if(visited[i] == 1)
			continue;
		
		count = 0;
		
		for(int j = 0; j < n; j++)
		{
			if(array[i] == array[j])
			{
				visited[j] = 1;
				count++;
			}
		}
		
		cout << array[i] << ": " << count << endl;
	}
	
	return 0;
}