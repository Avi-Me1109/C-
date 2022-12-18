#include<iostream>
#include<cmath>
using namespace std;

struct coordinates
{
	int x;
	int y;
};//This struct is used to hold the coordinates of the points

int checker(int x1, int x2, int y1, int y2)
{
	if(x2 - x1 == 0 || x1 - x2 == 0)
	{
		if(y2 - y1 == 0 || y1 - y2 == 0)
		{
			return 1;
		}//This nested if statement checks if the difference of xs and ys are 0
		
		else
			return 2;
	}//This function tries to evaluate the difference between two points.
	
	else if (y2 - y1 == 0 || y1 - y2 == 0)
	{
		return 3;
	}//This if statement sees if the difference of the ys are 0
	
	else
	{
		return 4;
	}
}
	
void output(int a)
{
	if(a == 1)
	{
		cout << "The line between these two points is horizontal";
	}//since it is 1 it means the difference, top and bottom are 0 which means the gradient is 0, meaning the line is horizontal.
	
	if(a == 2)
	{
		cout << "The line between these two points is vertical";
	}//since it is 2 it means the difference, bottom is 0 which means the gradient is infinite, meaning the line is vertical.
	
	if(a == 3)
	{
		cout << "The line between these two points is horizontal";
	}//since it is 3 it means the difference, top is 0 which means the gradient is 0, meaning the line is horizontal.
	
	if(a == 4)
	{
		cout << "The line is neither horizontal or vertical between these two points";
	}//since it is 4 it means the difference, top and bottom are not 0 which means the gradient is is some constant, meaning the line is neither horizontal or vertical.
}//This function takes in values from the previous function and outputs the answer.

//The function theory behind this is (y2 - y1)/(x2 - x1)

int main()
{
	coordinates a1, a2;
	int cv;
	//Declaration of structures and an integer
	
	cout << "Enter your x-value of point 1: \n";
	cin >> a1.x;
	
	cout << "Enter your y-value of point 1: \n";
	cin >> a1.y;
	
	cout << "Enter your x-value of point 2: \n";
	cin >> a2.x;
	
	cout << "Enter your y-value of point 2: \n";
	cin >> a2.y;
	//Taking in all co-ordinates of both the points
	
	cv = checker(a1.x, a2.x, a1.y, a2.y); 
	//calling the function checker and assigning the return value
	
	output(cv);
	//outputting the final value
}

