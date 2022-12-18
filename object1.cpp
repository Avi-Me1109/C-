#include <iostream>
#include <string>
//#include "Rect.h"
using namespace std;

class rectangle
{
	public:
	int getlengthx() const
	{
		return x;
	}
	
	int getlengthy() const
	{
		return y;
	}
	
	void setlengthx(int number) 
	{
		x = number;
	}
	
	void setlengthy(int number) 
	{
		y = number;
	}
	
	void displayMessage() const
	{
		std::cout << "Lengths are  " << getlengthx() << " and " << getlengthy();
	}
	private:
	int x, y;
	
};

class square: public rectangle
{
	public: 
	void determiner(int a, int b)
	{
		if(a == b)
		{
			cout << "It is a square.";
		}
		
		else
		{
			cout << "It is a rectangle.";
		}
	}
	
};

	
	

int main()
{
	int x1, y1;
	square s1;
	
	cout << "Please enter length: ";	
	cin >> x1;
	
	cout << "Please enter other length: ";
	cin >> y1;
	
	s1.setlengthx(x1);
	s1.setlengthy(y1);
	
	s1.displayMessage();
	
	cout << endl;
	
	s1.determiner(x1, y1);
}

