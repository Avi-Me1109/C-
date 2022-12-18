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
using namespace std;

	void Point::set_a2(int z)
	{
		a2 = z;
	}
	
	int Point::get_a2()
	{
		return a2;
	}
	
	void Point::set_color(char color)
	{
		user_color = color;
	}
	
	void Point::set_position_x(int a)
	{
		position_x = a;
		
		if(a == 69)
		{
			cout << "Game disrupted!\n";
			cout << "Penalty to be inflicted\n";
			cout << "Current turn passed on to next player";
			
			a2 = 1;
		}
	}
	
	int Point::get_color()
	{
		return user_color;
	}
	
	//get set functions of the variable color with the inheritance from BasePoint

	//declaration of the functions from class with content