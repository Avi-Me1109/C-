#include <iostream>
using namespace std;

int main()
{
	int value1, value2, answer;
	
	value1 = 3 * (2.55 * 2.55 * 2.55);
	value2 = 5 * (2.55 * 2.55);
	
	answer = value1 - value2 + 6;
	
	cout << answer;
}

