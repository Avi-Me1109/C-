#include <iostream>
using namespace std;

int main()
{
	int noofexcersices, scorereceived, pointspossible, Totalpointspossible = 0, percentage;
	float Totalscorereceived = 0;
	
	cout << "How many excersices to input?" ;
	cin >> noofexcersices;
	
	for (int i = 1; i <= noofexcersices; i++)
	{
		cout << "Score received for excercise " << i << ":";
		cin >> scorereceived;
		
		cout << "Total points possible for excercise " << i << ":";
		cin >> pointspossible;
		
		Totalpointspossible = Totalpointspossible + pointspossible;
		Totalscorereceived = Totalscorereceived + scorereceived;
	}
	
	percentage = (Totalscorereceived / Totalpointspossible) * 100;
	
	cout << "Your total is " << Totalscorereceived<< " out of " << Totalpointspossible << ", or " << percentage << "%"; 
	
	
	
	
}

