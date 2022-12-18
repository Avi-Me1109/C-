//Avi Raj Balam
//Lab 1 - Question 2
//Date: 02-03-2022
//Calculating Quotient and Remainder

#include <iostream>
using namespace std;

int main()
{
	int a, b, quotient, remainder;
	//variables have been declared.
	
	cout << "Please enter the integer you want divided: ";
	cin >> a;
	//the value that is to be divided is inputed from the user after asking them.
	
	cout << "Please enter the integer you are dividing by: ";
	cin >> b;
	//the value that that the above value is being divided by is inputed from the user here also after asking them.
	
	quotient = a / b;
	//here the variable quotient is being defined as the value a divided by the value b.
	remainder = a % b;
	//here the variable remainder is being defined as the remainder from the division of a by b.
	
	cout << "\n";
	//for a cleaner output, this creates a newline.
	cout << "The quotient is " << quotient << "\n";
	//here the quotient is being printed.
	cout << "The remainder is " << remainder << "\n";
	//here the remander is being printed.
}

