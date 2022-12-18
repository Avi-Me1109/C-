#include <iostream>
using namespace std;

int main()
{
	int Celsius = 100;
	float Fahrenheit;
	
	
	while (Celsius >= -100)
	{
		Fahrenheit = Celsius * 9;
		Fahrenheit = Fahrenheit / 5;
		Fahrenheit = Fahrenheit + 32;
		
		
		if(Fahrenheit == Celsius)
			cout << "Fahrenheit and Celsius are equal to each other at " << Celsius << "\n";
	
		Celsius--;
	}
	
}


	
	
			