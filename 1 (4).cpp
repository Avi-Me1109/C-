//Avi Raj Balam
//Lab 4 - Question 1
//Date: 03-15-2022
//Tic Tac Toe using arrays (human vs human)

#include <iostream>
#include <cstdlib>
using namespace std;

int winner(int row[])//This is the first function that determines if a winner has been found.
{
	if(row[0] == row[3] && row[0] == row[4])
		return 1;

	else if(row[1] == row[4] && row[1] == row[5])
		return 2;

	else if(row[3] == row[6] && row[3] == row[7])
		return 3;

	else if(row[4] == row[7] && row[4] == row[8])
		return 4;

	else if(row[6] == row[7] && row[6] == row[4])
		return 5;

	else if(row[7] == row[8] && row[7] == row[5])
		return 6;

	else if(row[3] == row[4] && row[3] == row[1])
		return 3;

	else if(row[4] == row[5] && row[4] == row[2])
		return 4;
	
	else if(row[1] == row[0] && row[1] == row[3])
		return 2;
	
	else if(row[2] == row[1] && row[2] == row[4])
		return 7;
	
	else if(row[4] == row[3] && row[4] == row[6])
		return 4;
	
	else if(row[5] == row[4] && row[5] == row[7])
		return 8;
	
	else if(row[0] == row[1] && row[0] == row[4])
		return 1;
	
	else if(row[1] == row[2] && row[1] == row[5])
		return 2;
	
	else if(row[3] == row[4] && row[3] == row[7])
		return 3;
	
	else if(row[4] == row[5] && row[4] == row[8])
		return 4;
	//All these if else statements check if 3 'x' or 'o' has been placed consecutively next to each other in an l-shape of any orientation.
	//The premise of them is to check the contents from the array and evaluate if three of them are in an l-shape.
	else
		return 9;
	//The last return statement will be the determiner to make sure the program continues if no winner is found as this condition means that the contents of 3 boxes in an l-shape are not the same.
}

void output_winner(int a, char array2[])//This second function identifies what array's content to check and output accordingly if either 'x' or 'o' had won.
{
	if(a==1)
	{
		if(array2[0] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==2)
	{
		if(array2[1] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==3)
	{
		if(array2[3] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==4)
	{
		if(array2[4] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==5)
	{
		if(array2[6] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==6)
	{
		if(array2[7] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==7)
	{
		if(array2[2] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==8)
	{
		if(array2[5] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==9)
	{
		cout << "No winner yet.\n";
	}
	//This function based on the returned value checks the respective array and then if it is 'x' or 'o' outputs the winner accordingly.
	
	/*For optmization, rather than each type of win (different orientations of l-shape), giving different output numbers that have to be evaluated separatetly, the code outputs the same return value
	if a array type is included in a type of win more than one time. As in if array[0] had been used more than once in a condition, then they return the same value so that this second function can check array[0] for\
	both conditions to output a winner*/
}

int main()
{
	char row1[]= {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	int row2[9];
	char character;
	int position, determiner;
	//over here all the arrays and variables have been declared with one being intialized to symbolize a blank tic tac toe board.

	cout << row1[0] << "\t" << row1[1] << "\t" << row1[2] << "\n";
	cout << "\n";
	cout << row1[3] << "\t" << row1[4] << "\t" << row1[5] << "\n";
	cout << "\n";
	cout << row1[6] << "\t" << row1[7] << "\t" << row1[8] << "\n";
	//This first output line outputs the blank keyboard to prove that there is no hidden cheats.

	cout << "(0 to 2) is the first row\n";
	cout << "(3 to 5) is the second row\n";
	cout << "(6 to 8) is the third row\n";
	cout << "The numbers are the individual places horizontally\n";
	//These lines gives some clarity about how to pick the position they want to place their symbol in.

	for(int i = 0; i <= 8; i++)
	{

		cout << "Enter the position:";
		cin >> position;
		//these lines ask and then take in the position the player wants ti place his symbol at.



		if (row1[position] == ' ')
		{
			cout << "Enter x or o:";
			cin >> character;
			//These lines ask their character
			row1[position] = character;
			//This line places the character.
			if(character == 'x')
			{
				row2[position] = 1;
			}

			if(character == 'o')
			{
				row2[position] = 0;
			}//These two small if statements places either a 1 or a 0 in the second row array to use later as an integer backplate of the original tic tac toe board for easier determination of the winner.
		}


		else
			cout << "This space has already been filled\n";
		//This if else statement makes sure that a space will not be overwritten as well as a penalty of losing their turn if they try to place in a filled position.
		
		cout << "Current board\n";
		cout << row1[0] << "\t" << row1[1] << "\t" << row1[2] << "\n";
		cout << "\n";
		cout << row1[3] << "\t" << row1[4] << "\t" << row1[5] << "\n";
		cout << "\n";
		cout << row1[6] << "\t" << row1[7] << "\t" << row1[8] << "\n";
		//This then outputs the current board after each turn to show the filled and unfilled spaces.
		
		determiner = winner(row2);
		//This calls the winner function with the row2 array for easy determination of the array as well as placing the return value in the variable of determiner.
		output_winner(determiner, row1);
		//This calls the output_winner function with the determiner and the row1 array so that the return value for checking can be taken as well as the checking of 'x' or 'o' in the winner's line to output their win.
		if(determiner < 9)
			break;

		else
			continue;
		//This if else statement makes sure that if a winner is found the for loop breaks and the game ends otherwise the game still continues.
		//It determines by using the determiner, as if the return value is 9, that means there is no winner yet. Less than 9 any number there is a winner.
	}
	//This large for loop makes sure that the game runs repeadetly till a winner is found or until the board is completely filled as to when the game terminates and they have to run the program again.
}