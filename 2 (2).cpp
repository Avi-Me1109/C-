#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

struct coordinates
{
	int row1;
	int column1;
	int row2;
	int column2;
};//Declaration of structure to hold position of the two ships

void board(char array[5][5])
{
	cout << "Current Board\n";
	cout << array[0][0] << " | " << array[0][1] << " | " << array [0][2] << " | " << array [0][3] << " | " << array [0][4];
	cout << "\n";
	cout << "------------------";
	cout << "\n";
	cout << array[1][0] << " | " << array[1][1] << " | " << array [1][2] << " | " << array [1][3] << " | " << array [1][4];
	cout << "\n";
	cout << "------------------";
	cout << "\n";
	cout << array[2][0] << " | " << array[2][1] << " | " << array [2][2] << " | " << array [2][3] << " | " << array [2][4];
	cout << "\n";
	cout << "------------------";
	cout << "\n";
	cout << array[3][0] << " | " << array[3][1] << " | " << array [3][2] << " | " << array [3][3] << " | " << array [3][4];
	cout << "\n";
	cout << "------------------";
	cout << "\n";
	cout << array[4][0] << " | " << array[4][1] << " | " << array [4][2] << " | " << array [4][3] << " | " << array [4][4];
	cout << "\n";
}//outputting the board accordingly according to the array subscripts, with some cosmetics

void board(int array[5][5])
{
	cout << "Current Board\n";
	cout << array[0][0] << " | " << array[0][1] << " | " << array [0][2] << " | " << array [0][3] << " | " << array [0][4];
	cout << "\n";
	cout << "------------------";
	cout << "\n";
	cout << array[1][0] << " | " << array[1][1] << " | " << array [1][2] << " | " << array [1][3] << " | " << array [1][4];
	cout << "\n";
	cout << "------------------";
	cout << "\n";
	cout << array[2][0] << " | " << array[2][1] << " | " << array [2][2] << " | " << array [2][3] << " | " << array [2][4];
	cout << "\n";
	cout << "------------------";
	cout << "\n";
	cout << array[3][0] << " | " << array[3][1] << " | " << array [3][2] << " | " << array [3][3] << " | " << array [3][4];
	cout << "\n";
	cout << "------------------";
	cout << "\n";
	cout << array[4][0] << " | " << array[4][1] << " | " << array [4][2] << " | " << array [4][3] << " | " << array [4][4];
	cout << "\n";
}//overloading of the function to scan for bugs, not genuinely necessary

int check(int a, int b, int array[5][5])
{
	if(array[a][b] == 1)
	{
		return 1;
	}//since ship presecence means one, this if statement scans if a ship has been hit.
	
	else
		return 2;
}//a function to identify if the player has hit a ship or not.

void modifier(int check, int a, int b, char array[5][5])
{
	if(check == 1)
	{
		array[a][b] = 'H';
	}
	
	if(check == 2)
	{
		array[a][b] = 'X';
	}
}//a function to place an X or H depending on the fact if the player has hit or missed the ship. Also to fill up the board so the player knows where he has hit until now.

void output(int modifier)
{
	if(modifier == 1)
		cout << "You've got a Hit!\n";
	
	else
		cout << "Your time is running out!\n";
}//an output function after every turn depending on a hit or not to satisfy question requirements


int main()
{
	char array1[5][5] = {{' ', ' ', ' ', ' ', ' '}, {' ', ' ', ' ', ' ', ' '}, {' ', ' ', ' ', ' ', ' '}, {' ', ' ', ' ', ' ', ' '}, {' ', ' ', ' ', ' ', ' '}};
	int array2[5][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}};
	coordinates a, b;
	int acheck, player_row, player_column, randomizer;
	//declaration of structures, arrays and integers
	srand(time(0));
	//setting of seed
	
	board(array1);
	cout << "You have ten chances to sink two ships of size two boxes\n";
	cout << "The program will end if you run out of chances\n";
	//output of board and main ground rules of the game
	
	a.row1 = rand()%5;
	a.column1 = rand()%5;
	//assigning a random position for ship a
	if(a.row1 + 1 < 4)
	{
		a.row2 = a.row1 + 1;
		a.column2 = a.column1;
	}
	
	if(a.column1 + 1 < 4)
	{
		a.row2 = a.row1;
		a.column2 = a.column1 + 1;
	}
	
	if(a.row1 + 1 > 4)
	{
		a.row2 = a.row1 - 1;
		a.column2 = a.column1;
	}
	
	if(a.column1 + 1 > 4)
	{
		a.row2 = a.row1;
		a.column2 = a.column1 - 1;
	}
	//all this if statements scan the position of one place of ship a and determinging if it is at an edge or in the middle and so on, places the next place of the ship accordingly/
	//after this the size of the ship is two boxes
	
	do{
		b.row1 = rand()%5;
	}while(b.row1 == a.row1);
	
	do{
		b.column1 = rand()%5;
	}while(b.column1 == a.column1);
	//same thing as a assigning a random start position of ship b, but with a do while loop to make sure that ship b doesnt overwrite any position of ship b
	
	if(b.row1 + 1 < 4)
	{
		b.row2 = b.row1 + 1;
		b.column2 = b.column1;
	}
	
	if(b.column1 + 1 < 4)
	{
		b.row2 = b.row1;
		b.column2 = b.column1 + 1;
	}
	
	if(b.row1 + 1 > 4)
	{
		b.row2 = b.row1 - 1;
		b.column2 = b.column1;
	}
	
	if(b.column1 + 1 > 4)
	{
		b.row2 = b.row1;
		b.column2 = b.column1 - 1;
	}
	//repeat of the if statements, with same functions from line 113 tp 135
	
	
	array2[a.row1][a.column1] = 1;
	array2[a.row2][a.column2] = 1;
	array2[b.row1][b.column1] = 1;
	array2[b.row2][b.column2] = 1;
	//assigning '1' to places with the prescence of a ship to use later for computation in a separate array.
	//0 is initially assigned to places with no ship prescence.
	//array2, main computation
	//array1, display and one computation
	
	
	for(int i = 0; i < 10; i++)
	{	
		cout << "Enter the row you want to target: ";
		cin >> player_row;
		//getting the players choice of targetting, row
		player_row--;
		//minusing one as array positions start from 0 and not 1
		
		cout << "Enter the column you want to target: ";
		cin >> player_column;
		//getting the players choice of targetting, column
		player_column--;
		//same purpose as 189
		
		acheck = check(player_row, player_column, array2);
		//calling of function check and assigning the return value to acheck and using array2 and '1' and '0' for easier computation
		
		modifier(acheck, player_row, player_column, array1);
		//calling of function modifier to change the contents of array1 to display to the player
		
		board(array1);
		//outputting board after turn
		
		output(acheck);
		//calling the output function
		
		if(array1[a.row1][a.column1] == 'H')
		{
			if(array1[a.row2][a.column2] == 'H')
			{
				if(array1[b.row1][b.column1] == 'H')
				{
					if(array1[b.row2][b.column2] == 'H')
					{
						cout << "You have sunk all the ships! Great Job!";
						break;
					}
				}
			}
		}//a nested if chain to end the loop with a break if the player has sunk all the ships in his 10 turns
		
	}//for loop to give the player 10 turns until he runs out
}//the program terminates if the player fails to sink all the ships.


