//Avi Raj Balam
//Lab 8 - Question 2
//Date: 04/29/2022
//Bingo with addition

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "BasePoint.h"
using namespace std;


	int BasePoint::get_position_x()
	{
		return position_x;
	}
	
	void BasePoint::set_position_x(int a)
	{
		position_x = a;
	}
	
	int BasePoint::get_position_y()
	{
		return position_y;
	}
	
	void BasePoint::set_position_y(int a)
	{
		position_y = a;
	}
	
	//declaration of get set functions with its content for class use later in main code
	
	int BasePoint::check_fill(char board[6][7], int a, int b)
	{
		if(board[a][b] == ' ') 	
		{
			return 1;
		}
		
		
		else
		{
			return 2;
		}
	}
	
	//a check function that determines if a certain position in the board is empty or not for its status
	