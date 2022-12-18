//Avi Raj Balam
//Lab 3 - Question 1
//Date: 03-15-2022
//Tic Tac Toe using 2d arrays (human vs human)

#include <iostream>
#include <cstdlib>
using namespace std;

int winner(int row[3][3])//This is the first function that determines if a winner has been found.
{
	if(row[0][0] == row[1][0] && row[0][0] == row[1][1])
		return 1;

	else if(row[0][1] == row[1][1] && row[0][1] == row[1][2])
		return 2;

	else if(row[1][0] == row[2][0] && row[1][0] == row[2][1])
		return 3;

	else if(row[1][1] == row[2][1] && row[1][1] == row[2][2])
		return 4;

	else if(row[0][1] == row[1][1] && row[0][1] == row[1][0])
		return 2;

	else if(row[0][2] == row[1][2] && row[0][2] == row[1][1])
		return 4;

	else if(row[1][1] == row[2][1] && row[1][1] == row[2][0])
		return 3;

	else if(row[1][2] == row[2][2] && row[1][2] == row[2][1])
		return 5;
	
	else if(row[1][0] == row[0][0] && row[1][0] == row[0][1])
		return 1;
	
	else if(row[1][1] == row[0][1] && row[1][1] == row[0][2])
		return 2;
	
	else if(row[2][0] == row[1][0] && row[2][0] == row[1][1])
		return 3;
	
	else if(row[2][1] == row[1][1] && row[2][1] == row[1][2])
		return 4;
	
	else if(row[1][1] == row[0][1] && row[1][1] == row[0][0])
		return 1;
	
	else if(row[1][2] == row[0][2] && row[1][2] == row[0][1])
		return 2;
	
	else if(row[2][1] == row[1][1] && row[2][1] == row[1][0])
		return 3;
	
	else if(row[2][2] == row[1][2] && row[2][2] == row[1][1])
		return 4;
	//All these if else statements check if 3 'x' or 'o' has been placed consecutively next to each other in an l-shape of any orientation.
	//The premise of them is to check the contents from the array and evaluate if three of them are in an l-shape.
	else
		return 6;
	//The last return statement will be the determiner to make sure the program continues if no winner is found as this condition means that the contents of 3 boxes in an l-shape are not the same.
}

void output_winner(int a, char array2[3][3])//This second function identifies what array's content to check and output accordingly if either 'x' or 'o' had won.
{
	if(a==1)
	{
		if(array2[0][0] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==2)
	{
		if(array2[0][1] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==3)
	{
		if(array2[1][0] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==4)
	{
		if(array2[1][1] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==5)
	{
		if(array2[1][2] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}
	
	if(a==6)
	{
		cout << "No winner yet.\n";
	}
	//This function based on the returned value checks the respective array and then if it is 'x' or 'o' outputs the winner accordingly.
	
	/*For optmization, rather than each type of win (different orientations of l-shape), giving different output numbers that have to be evaluated separatetly, the code outputs the same return value
	if a array type is included in a type of win more than one time. As in if array[0] had been used more than once in a condition, then they return the same value so that this second function can check array[0] for
	both conditions to output a winner*/
}


int main()
{
	char row1[3][3]= { {' ', ' ', ' '}, { ' ', ' ', ' ',},  {' ', ' ', ' '} };
	int a,b;
	int row2[3][3];
	char character;
	int row, column, determiner;
	
	//over here all the arrays and variables have been declared with one being intialized to symbolize a blank tic tac toe board
	srand(time(0));
	//sets a seed to make sure full random

	cout << row1[0][0] << "\t" << row1[0][1] << "\t" << row1[0][2] << "\n";
	cout << "\n";
	cout << row1[1][0] << "\t" << row1[1][1] << "\t" << row1[1][2] << "\n";
	cout << "\n";
	cout << row1[2][0] << "\t" << row1[2][1] << "\t" << row1[2][2] << "\n";

	
	for(int i = 0; i <= 8; i++)
	{

		cout << "Enter the row:";
		cin >> row;
		//Asks and takes the row number
		
		cout << "Enter the column:";
		cin >> column;
		//Asks and takes the column number


		if (row1[row-1][column-1] == ' ')
		{
			row1[row-1][column-1] = 'x';
			row2[row-1][column-1] = 1;
		}//over here the users column and row number is minused one as array sequences start from 0 instead of 1


		else
			cout << "This space has already been filled\n";
		//This if else statement makes sure that a space will not be overwritten as well as a penalty of losing their turn if they try to place in a filled position.
		
		cout << "Current board\n";
		cout << row1[0][0] << "\t" << row1[0][1] << "\t" << row1[0][2] << "\n";
		cout << "\n";
		cout << row1[1][0] << "\t" << row1[1][1] << "\t" << row1[1][2] << "\n";
		cout << "\n";
		cout << row1[2][0] << "\t" << row1[2][1] << "\t" << row1[2][2] << "\n";
		//This outputs the current board after a player's turn
		
		determiner = winner(row2);
		//This calls the winner function with the row2 array for easy determination of the array as well as placing the return value in the variable of determiner.
		output_winner(determiner, row1);
		//This calls the output_winner function with the determiner and the row1 array so that the return value for checking can be taken as well as the checking of 'x' or 'o' in the winner's line to output their win.
		

		if(determiner < 6)
			break;
		//This if statement makes sure that if a winner is found the for loop breaks and the game ends otherwise the game still continues.
		//It determines by using the determiner, as if the return value is 6, that means there is no winner yet. Less than 9 any number there is a winner.
		
		do{
			a = rand()%2;
			b = rand()%2;
		}while (row1[a][b] != ' ');
		//This do while produces a random generated value for a row and column until the array position is not filled with any value except a ' '
		
		row1[a][b] = 'o';
		row2[a][b] = 0;	
		//This places the random generated computer position in the two arrays filling one with an 'o' and the other with a 0
		
		cout << "Current board\n";
		cout << row1[0][0] << "\t" << row1[0][1] << "\t" << row1[0][2] << "\n";
		cout << "\n";
		cout << row1[1][0] << "\t" << row1[1][1] << "\t" << row1[1][2] << "\n";
		cout << "\n";
		cout << row1[2][0] << "\t" << row1[2][1] << "\t" << row1[2][2] << "\n";
		//This outputs the current board after a computer turn

		determiner = winner(row2);
		output_winner(determiner, row1);
		//This repeats the same steps earlier but with the computer play

		if(determiner < 6)
			break;

		else
			continue;
		//This also is the same as before but now with an else statement to prevent some bugs.
	}
}