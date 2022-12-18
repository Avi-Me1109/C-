//Avi Raj Balam
//Project - Question 1
//Date: 04/22/2022
//Bingo Chess Game Four in a Row
//Driver file for class Point

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "BasePoint.h"
#include "Point.h"
using namespace std;


	void Point::set_color(char color)
	{
		user_color = color;
	}
	
	int Point::get_color()
	{
		return user_color;
	}
	
	//get set functions of the variable color with the inheritance from BasePoint

	//declaration of the functions from class with content