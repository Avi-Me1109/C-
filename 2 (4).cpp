//Avi Raj Balam
//Lab 3 - Question 2
//Date: 02-24-2022
//Converting Binary to Decimal

#include <iostream>
#include <cmath>
using namespace std;

// function prototype
int convert(long, int);

int count_digit(int number) {
   int count = 0;
   while(number != 0) {
      number = number / 10;
      count++;
	  //does this by dividing 10 until the digit goes to a decimal which becomes 0 as int variable and every time the loop repeats count goes up
   }
   return count;
   //Returns the count
}//This function helps to keep track of the number of digits in the binary number



int main() {

	int no_ofdigits;
  long n;
  //long used to hold the large binary numbers
  
  cout << "Enter a binary number: ";
  cin >> n;
  //taking input from the user for the binary number
  
  no_ofdigits = count_digit(n);
  //this calls the count_digit function to count the number of digits in the binary number
  
  cout << n << " in binary = " << convert(n, no_ofdigits) << " in decimal";
  //over here the result is outputted, conjoined with the calling of the convert function to reduce variables.
  
  return 0;
}

// function definition
int convert(long n, int number) {
  int decimal = 0, changing_number, two_power = 1, adder;

	for(int i = 0; i < number; i++)
	{
		changing_number = n%10;
		//The changing number is the specific number isolated at the end of the binary number that is being converted one by one
		
		decimal = decimal + (changing_number * pow(2,i));
		//The decimal value is the addition of the changing number times with 2 to the power of the count of digits,starting at 0. Thus the first digit would be 1 or 0 times 2 to the power of 0 and then 2 to the power of 1 and so on.
		
		n = n / 10;
		//This taks out the value that has already been calculated to decimal to calculate the next binary value to a decimal value.
	}
	//This for function will carry out the entire process until the number of digits are finished or in other words when all binary numbers are converted to decimals
	
	return decimal;
	//Returns the decimal answer
}//This function turns binary to decimal