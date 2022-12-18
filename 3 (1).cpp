//Avi Raj Balam
//Lab 1 - Question 1
//Date: 02-21-2022
//Program to determine if a 5-digit number is a palindrome or not.

#include <iostream>
using namespace std;

int main()
{
	int integer, original , reversed = 0, remainder;
	//variables have been declared
	
	cout << "Enter an 5-digit integer: ";
	cin >> integer;
	//the integer for the palindrome is being inputed from the user after asking them
	
	original = integer;
	//this variable is used to retain the original integer as the integer value is being changed later.
	
 if(integer < 100000 && integer > 9999){ //[1]
	 
	while(integer != 0) {
		remainder = integer % 10;
		//The last integer is first separated and is stored in the remainder variable
		reversed = reversed * 10 + remainder;
		//Over here the reversed variable is the embodiement of the reversed values.
		//For the first reversed variable it is simply the last number while later on the current reversed values is multiplied by 10 so that it can hold the next value.
		integer = integer / 10;
		//Over here the integer value is being altered to remove the last digit of the integer
	}
	
	if (original == reversed)
		cout << original << " is a palindrome";
	
	else
		cout << original << " is not a palindrome";
	//This if else statement compares the original integer and the reversed integer.
	//If theses two are the same, it prints that the integer is a palindrome as that is the definition of a palindrome: 'the number reversed is the same as the original number'
	//If these two are not the same, it prints that the integer is not a palindrome
 }
 
 else
	 cout << "You have not entered a five digit number.";
 //This if else [1] statement determines if the integer enetered is 5-digits or not. If it is it goes through the statements in the if section.
 //If it is not a 5-digit integer, it doesnt go through the if section and just outputs that it is not a 5-digit integer.


}

