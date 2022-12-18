//Avi Raj Balam
//Lab 3 - Question 1
//Date: 02-24-2022
//Calculating pi using an infinite series

#include <iostream>
using namespace std;

int main()
{
	float pi = 4, fraction;
	float denominator = 3;
	//declaration of variables in float as we are dealing with decimals and accuracy
	// pi is declared as 4 to start of the infinite series
	
	
	for(int i = 0; i<= 1000; i++)
	{
		fraction = 4 / denominator;
		//to get the values of the series
	
		if (i % 2 == 0)
		{
			pi -= fraction;
			//+ the fractions
		}
		
		else
		{
			pi += fraction;
			//-the fractions
		}
		//The if statement that helps alternates between the + and - in the series to follow the infinite series accurately
		
		denominator = denominator + 2;
		//Increasing the denominator by 2 everytime for the odd numbers to increase in odd numbers only
		
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(8);
		// code to output the result in 8 decimal places

		
		cout << "pi for number " << i << " in ther series is " << pi << "\n";
		//printing out the output for each of the accuracy levels of the number of items carried out in the infinite series
		
		
	}
	//This for loop helps to make the entire process repeat a 1000 times and thus printing the value of pi for every turn in the infinite series a 1000 times.
}
