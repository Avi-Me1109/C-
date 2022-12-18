//Avi Raj Balam
//Lab 1 - Question 1
//Date: 02-21-2022
//Using the Babylonian Alogrithm to calculate the square root of a number

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	float n, guess, r;
	//variables have been declared as float as we are dealing with accuracy and decimals
	
	cout << "Enter the number you want to compute the square root for: ";
	cin >> n;
	//the value to calculate the square root for is inputed from the user after asking them
	
	cout << "Make a guess of your answer: ";
	cin >> guess;
	//a guess from the user is inputted here and is purely up to the user. This number can be any number.
	
	for (int i = 0; i < 5; i++)
	{
		r = n / guess;
		guess = (guess + r) / 2;
		//the content in the for loop is the babylonian alogrithm
	}
	//the for loop would repeat five times as the counter would start from 0 and ends at the number 4 with 0 being a loop as well.
	//thus, the babylonian algorithm would repeat 5 times for that degree of accuracy stated in the question.
	
	//The following code is used to set the final answer's precision to be set to 2 decimal places
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	
	cout << "The approximate answer after 5 iterations is " << guess;
	//This would output the final answer that has been calculated after repeating the Babylonian Alogrithm five times
}

