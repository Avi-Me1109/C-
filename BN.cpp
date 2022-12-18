#include <iostream>
using namespace std;

int main()
{
	float x;
	float answer;
	
	cout << "Evaluating polynomial : 3x^3 - 5x^2 + 6\n";
	cout << "Evaluating x-value : 2.55\n";
	
	x = 2.55;
	
	answer = 3*(x*x*x) - 5*(x*x) + 6;
	
	cout << "The answer is " << answer << "\n";
	
}

