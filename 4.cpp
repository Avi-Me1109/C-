//Avi Raj Balam
//Lab 3 - Question 4
//Date: 02-24-2022
//Creating a guessing game with the ability to help the user zero in on the answer

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


void sentences (int a, int b)
{
	if(a == b)
	{
		cout << "Excellent! You guessed the number!" << "\n";
	}//If the user gets the answer by equating to guess, prints that he/she got the answer.
	
	if(a > b)
	{
		cout << "Too High. Try again." << "\n";
	}//If the user goes high of the answer by equating to guess, prints that he/she is too high
	
	if(a < b)
	{
		cout << "Too Low. Try again." << "\n";
	}//If the user goes low of answer by equating to guess, prints that he/she is too low
}//Function to help the user figure out the answer

void guess_output (int a)
{	
	if(a <= 10)
			cout << "Either you know the secret or you got lucky!\n";
	//If the guess number is below ten, this sentence is printed
	
	if(a > 10)
			cout << "Revise your strategy and ask a little bit more of Lady Lucks blessings.\n";
	//If the guess number is above ten, this sentence is printed
}//function used to print luck statements depending on the number of guesses as per the question

int main()
{
	int guess_counter = 0;
	int answer, guess, count;
	char yes_no;
	//variables declared
	//char function used to determine if the user wants to play again
	
	do
	{
		srand(time(0));
		answer = rand() % 1000 + 1;
		//random function statements to create a randomly generated answer
	
		do 
		{
			cout << "Enter your guess: ";
			cin >> guess;
			//Inputting the guess from the user
	
	
			sentences(guess, answer);
			//parameters given and called upon the sentences function to help the user zero in on the answer
			
			guess_counter = guess_counter + 1;
			//this statement adds up the number of times the user has tried to guess the answer
			
			
		} while (guess != answer);
		//do while loop that repeats the statements that terminates after the user doesnt get the answer
		
		guess_output (guess_counter);
		//parameters given and called upon the guess_output function to print the luck statements
	
		cout << "Would you like to play again (y or n)?";
		cin >> yes_no;
		//inputting the statement if the user wants to play again or not
		//requires char here as y or n must be inputted as required
	}  while(yes_no == 'y');
	//final do while loop that runs the codes once to start the first round of the game and repeats every time the user says yes(y) to repeat the game to play again and terminates if the user says no(n)
}



	
	
	
	
	
	
	