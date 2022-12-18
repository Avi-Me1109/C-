#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void dealingshape (int shape);
void card_deal(int number);

int main()
{
	int shape, number, shape_determiner, number_determiner; 
	srand(time(0));
	
	for(int a = 1; a <=4; a++)
	{
		shape_determiner = rand()%4 + 1;
		number_determiner = rand()%13 + 1;
		
		cout << "Player" << a << " ";
		card_deal(number_determiner);
		dealingshape(shape_determiner);
		
		cout << "\n";
		
	}	
	
}

void card_deal(int number)
{
	if(number == 1)
		cout <<"was dealt with Ace of ";
	else if(number == 11)
		cout << "was dealt with Jack of ";
	else if(number == 12)
		cout << "was dealt with Queen of ";
	else if(number == 13)
		cout << "was dealt with King of ";
	else
		cout << "was dealt with " << number << " of ";
}

void dealingshape (int shape)
{
	
		if(shape == 1)
			cout << "Clubs";
		
		if(shape == 2)
			cout << "Spades";
			
		
		if(shape == 3)
			cout << "Hearts";
		
		if(shape == 4)
			cout << "Diamonds";
}







		