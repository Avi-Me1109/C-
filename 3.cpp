//Avi Raj Balam
//Lab 3 - Question 3
//Date: 02-24-2022
//Counting the number of times a coin has flipped to heads or tails in 100 coin flips

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int flip()
{
	
	int integer;
	//variable declared to hold head or tails value
	
	integer = rand() % 2;
	//random function used between the numbers 1(heads) and 0(tails) and equated to integer
	
	return integer;
	//integer value returned
}//Function that is responsible for flipping the coin randomly

int main()
{
	int coin_face, head_count = 0, tail_count = 0;
	//values declared and some initialized
	
	srand(time(0));	
	//To ensure randomness
	
	for (int i = 0; i < 100; i++)
	{
		
		
		coin_face = flip();
		//calling upon flip function
		
		if(coin_face == 1)
		{
			head_count++;
		}
		
		if(coin_face == 0)
		{
			tail_count++;
		}
		//If statements that decide whether if its a heads or tails by thinking of heads as 1 and tails as 0 and increasing the count of head or tails accordingly.
		
	}//For loop to flip the virtual coin a 100 times as per the question
	
	cout << "The number of times the coin flipped to heads is " << head_count << "\n";
	cout << "The number of times the coin flipped to tails is " << tail_count;
	//The output is printed as the number of times the coin has flipped to heads or tails.
	
}


	