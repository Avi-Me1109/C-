	//Avi Raj Balam
	//Lab 2 - Question 1
	//Date: 02-21-2022
	//Separating and Printing Numbers Spaced From Each Other

	#include <iostream>
	using namespace std;

	int main()
	{
		int integer, number1, number2, number3, number4, number5;
		//variables have been declared

		cout << "Enter a 5-digit integer: ";
		cin >> integer;
		//the 5-digit integer value is inputed from the user after asking them

		number1 = integer/10000 % 10;
		//Over here the integer is divided by 10000 giving the first number in the integer before a decimal point.
		/*Then the % modulus function splits the last number of the values before the decimal point due to the 
		integer data type ignoring any value after a decimal point.*/
		
		cout << number1 << "   ";
		//outputs the value calculated above followed by a space so that the 'three spaces in between' requirement  is fullfilled

		number2 = integer / 1000 % 10;
		cout << number2 << "   ";;
		//This repeats the same steps as number1 but instead of 10000 it is being divided by 1000 so that first and second number is separated from the number.
		//Then the modulus function splits the last number which would be the second number after splitting and then outputs

		number3 = integer / 100 % 10;
		cout << number3 << "   ";

		number4 = integer / 10 % 10;
		cout << number4 << "   ";

		number5 = integer % 10;
		cout << number5 << "   ";
		
		//The next steps allso repeat the same thing but with varying divisors so that we can separate the value we require from the integer.
		//The outputs all combined together will be the output that is required.
	}



