#include <iostream>

int main()
{
	int a = 4, b = 12, c = 37, d = 51, result;
	
	result = d % a * c + a % b + a;

	std::cout << result;
}
	
	