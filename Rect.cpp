#include "Rect.h"
#include <iostream>

	int Rect::getlengthx() const
	{
		return x;
	}
	
	int Rect:: getlengthy() const
	{
		return y;
	}
	
	void Rect:: setlengthx(int number) 
	{
		x = number;
	}
	
	void Rect:: setlengthy(int number) 
	{
		y = number;
	}
	
	void Rect:: displayMessage() const
	{
		std::cout << "Lengths are  " << getlengthx() << " and " << getlengthy();
	}