//Avi Raj Balam
//Lab 8 - Question 2
//Date: 04/29/2022
//Bingo with addition

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "BasePoint.h"
#include "Point.h"
//inclusion of the class header files for use in program
using namespace std;


void board(char row1[6][7])
{
	cout << "Current board\n";
	cout << "-----------------------------";
	cout << "\n";
	cout << "| " << row1[0][0] << " | " << row1[0][1] << " | " << row1[0][2] << " | " << row1[0][3] << " | " << row1[0][4] << " | " << row1[0][5] << " | " << row1[0][6] << " | ";
	cout << "\n";
	cout << "-----------------------------";
	cout << "\n";
	cout << "| " << row1[1][0] << " | " << row1[1][1] << " | " << row1[1][2] << " | " << row1[1][3] << " | " << row1[1][4] << " | " << row1[1][5] << " | " << row1[1][6] << " | ";
	cout << "\n";
	cout << "-----------------------------";
	cout << "\n";
	cout << "| " << row1[2][0] << " | " << row1[2][1] << " | " << row1[2][2] << " | " << row1[2][3] << " | " << row1[2][4] << " | " << row1[2][5] << " | " << row1[2][6] << " | ";
	cout << "\n";
	cout << "-----------------------------";
	cout << "\n";
	cout << "| " << row1[3][0] << " | " << row1[3][1] << " | " << row1[3][2] << " | " << row1[3][3] << " | " << row1[3][4] << " | " << row1[3][5] << " | " << row1[3][6] << " | ";
	cout << "\n";
	cout << "-----------------------------";
	cout << "\n";
	cout << "| " << row1[4][0] << " | " << row1[4][1] << " | " << row1[4][2] << " | " << row1[4][3] << " | " << row1[4][4] << " | " << row1[4][5] << " | " << row1[4][6] << " | ";
	cout << "\n";
	cout << "-----------------------------";
	cout << "\n";
	cout << "| " << row1[5][0] << " | " << row1[5][1] << " | " << row1[5][2] << " | " <<  row1[5][3] << " | " << row1[5][4] << " | " << row1[5][5] << " | " << row1[5][6] << " | ";
	cout <<"\n";
	cout << "-----------------------------";
	cout << "\n";
}//prints board


int winner1(char row[6][7])
{
	
	for(int i = 5; i >= 0; i--)
	{
		for(int j=0; j <= 3; j++)
		{
				if(row[i][j] == row[i][j+1] && row[i][j] == row[i][j+2] && row[i][j] == row[i][j+3]	 && row[i][j] != ' ')
				{
					return 1;
					break;
				}
				
				else
					return 2;
		}
	}
}//checks winner for column type win
			
int winner2(char row[6][7])
{			
	for(int i = 2; i >= 0; i--)
	{
		for(int j = 0; j <= 6; j++)
		{

			if(row[i][j] == row[i+1][j] && row[i][j] == row[i+2][j] && row[i][j] == row[i+3][j] && row[i][j] != ' ')
			{
				return 1;
				break;
			}
				
			else
				return 2;
		}
	}
}//checks winner for row type win
	
int winner3(char row[6][7])
{	
	for(int i = 0; i <= 2; i++)
	{
		for(int j = 0; j <= 3; j++)
		{
				if(row[i][j] == row[i+1][j+1] && row[i][j] == row[i+2][j+2] && row[i][j] == row[i+3][j+3]  && row[i][j] != ' ')
				{
					return 1;
					break;
				}
				
				else
					return 2;
			}
		}
}//checks winner for diagonal to the right


int winner4(char row[6][7])		
{
	for(int i = 0; i > 2; i--)
	{
		for(int j = 0; j <= 3; j++)
		{
				if(row[i][j] == row[i-1][j-1] && row[i][j] == row[i-2][j-2] && row[i][j] == row[i-3][j-3]  && row[i][j] != ' ')
				{
					return 1;
					break;
				}
				
				else
					return 2;
		}
	}

}//checks winner for diagonal to the right
	

int placement(char row1[6][7], int a)
{
	int x = 5;
	
	if(a == 2)
	{
		x--;
	}
	
	if(a == 1)
	{
		x = x;
	}
		
	
	return x;
}//placement of row and a gravity type function where tokens stack up on each other and drop to the bottom for the beggining

int main()
{
	int continue_not;
	string user[4];
	int credits[4];
	//declaring variables
	
		ifstream inUserfile ("user.txt", ios::in);
		
		if(!inUserfile)
		{
			cerr << "File could not be opened" << endl;
			exit(EXIT_FAILURE);
		}//file failure code
		

		
		
		for (int i = 0; i <= 3; i++)
		{
			inUserfile >> user[i] >> credits[i];
		}//assigns the content of the file into user and credits array to hold on to output later
		
		inUserfile.close();
		//closes file
		
		
		int x, y, determiner, user_number, user_number2;
		char u1c, u2c;
		char board1[6][7];
		int board2[6][7];
		int origin[2];
		int a = 2;
		int checkfill1, checkfill2;
		int me = 0;
		//declaring variables
		
		cout << "First Player choose your user profile, by looking at file 'user.txt'\n";
		cout << "Input user number with one being the top entry of user and going down: ";
		cin >> user_number;
		user_number--;
		//Choosing of User 1 from the text file and a minus to avoid confusion between array subscripts
		//The users are chosen by sequence order from the file
		
		cout << "Second Player choose your user profile, by looking at file 'user.txt'\n";
		cout << "Input user number with one being the top entry of user and going down: ";
		cin >> user_number2;
		user_number2--;
		//Choosing of User 2 from the text file and a minus to avoid confusion between array subscripts
		//The users are chosen by sequence order from the file
		
		Point User1, User2;
		//declaring objects of class Point
		
		cout << endl;
		cout << "Enter User 1 color(G or R): ";
		cin >> u1c;
		User1.set_color(u1c);
		
		cout << endl;
		cout << "Enter User 2 color(G or R): ";
		cin >> u2c;
		User2.set_color(u2c);
		
		//setting of user colors to put in the board as green or red tokens
		
		for(int i = 0; i <= 5; i++)
		{
			for(int j = 0; j <= 6; j++)
			{
				
				board1[i][j] = ' ';
			}
		}//a small loop that initializes the board to blank
		
		board(board1);
		//function call
		
		for(int i = 0; i <= 1000; i++)
		{
			cout << "User 1 Enter your column position: ";
			cin >> y;
			y--;
			User1.set_position_y(y);
			//user column that minuses on for array
			//me variable that decides an odd or even number
			//if even then the User 2 won
			//if odd then the User 1 won
			
			for(int i = 5; i >= 0; i--)
			{
				if(board1[i][User1.get_position_y()] == ' ')
				{
					User1.set_position_x(i);
					break;
				}
				
			}//setting of the row position by a for loop so that a a token starts at the bottom and builds up if it is filled with another token.
			
			if(User1.get_position_y() == 69)
			{
				cout << "game disrupted\n";
				cout << "User 2 Enter your column position: ";
				cin >> y;
				User2.set_position_y(y-1);
				board1[User2.get_position_x()][User2.get_position_y()] = User2.get_color();
			}
			
			else
			{
				board1[User1.get_position_x()][User1.get_position_y()] = User1.get_color();
			}


			
			board1[User1.get_position_x()][User1.get_position_y()] = User1.get_color();
			//placing User1 token in its position with the color token collected earlier
			
			board(board1);
			//function call
			
			determiner = winner1(board1);
			//function call
			
			if(determiner == 2)
			{
				determiner = winner2(board1);
			}
			
			if(determiner == 2)
			{
				determiner = winner3(board1);
			}
			
			if(determiner == 2)
			{
				determiner = winner4(board1);
			}
			
			if(determiner == 1)
			{
				me = 1;
				break;
			}
			
			//multiple checks of the board so that can scan all aspects of winning the game (Horizontal, Vertical, Both diagonals)
			//Checks one by one if a certain checking function returns false as 2
			//After reaching the number of 1, the for loop is terminated
			
			
			cout << "User 2 Enter your column position: ";
			cin >> y;
			y--;
			User2.set_position_y(y);
			
			for(int i = 5; i >= 0; i--)
			{
				if(board1[i][User2.get_position_y()] == ' ')
				{
					User2.set_position_x(i);
					break;
				}
				
			}
			
			if(User2.get_position_y() == 69)
			{
				cout << "game disrupted\n";
				cout << "User 1 Enter your column position: ";
				cin >> y;
				User1.set_position_y(y-1);
				board1[User1.get_position_x()][User1.get_position_y()] = User1.get_color();
			}
			
			else
			{
				board1[User2.get_position_x()][User2.get_position_y()] = User2.get_color();
			}
			
			board(board1);
			
			determiner = winner1(board1);
			
			if(determiner == 2)
			{
				determiner = winner2(board1);
			}
			
			if(determiner == 2)
			{
				determiner = winner3(board1);
			}
			
			if(determiner == 2)
			{
				determiner = winner4(board1);
			}
			
			cout << determiner;
			
			if(determiner == 1)
			{
				me = 2;
				break;
			}
			
			else
				continue;
			//repeat of all earlier functions and codes from User 1
			
			
		}
		
		cout << "Game Ended!\n";
	
		if(me == 2)
		{
			credits[user_number2]++;
			credits[user_number]--;
			cout << "User 2 won!";
		}
			
		else
		{
			credits[user_number]++;
			credits[user_number2]--;
			cout << "User 1 won!";
		}
		
		//Using of the me variable to add credits to a user and an output
					
		ofstream outUserfile ("user.txt", ios::out);
	
		if(!outUserfile)
		{
			cerr << "File could not be opened" << endl;
			exit(EXIT_FAILURE);
		}

	
		for (int i = 0; i <= 3; i++)
		{
			outUserfile << user[i] << " " << credits[i] << "\n";
		}
		
		//Overwriting the original file with the new credit numbers and same users
	
		outUserfile.close();
	
	
	
}






