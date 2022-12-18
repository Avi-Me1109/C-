//Avi Raj Balam
//Lab 1 - Question 3
//Date: 02-03-2022
//Calculating Retroactive Pay

#include <iostream>
using namespace std;

int main()
{
	const int payincrease = 7.6;
	//the pay increase is defined as a constant value to avoid any change.
	int retroactivepaypermonth, monthlysalary, retroactivepaydue, oldannualsalary, newannualsalary, newmonthlysalary;
	int statement;
	//the required variables are all being defined here.
	
	cout << "Enter your current monthly salary: ";
	cin >> monthlysalary;
	//the current monthly salary of the worker is inputted here.
	
	cout << "Enter either 1 for 'true' or 0 for 'false' \n";
	cout << "Have you received your January salary: ";
	cin >> statement;
	//Over here the user is asked if his monthly January salary has been received or not to see which months contain the retroactive pay.
	
	retroactivepaypermonth = payincrease * monthlysalary;
	//retroactive pay per month is being calculated as pay increase multiplied by current monthly salary
	
	retroactivepaydue = retroactivepaypermonth * 6;
	//Total retroactive pay due is being calculated as the retroactive pay per month multiplied by 6 as retroactive pay is being applied for six months.
	
	oldannualsalary = monthlysalary * 12;
	//old annual salary calculated as current monthly salary multiplied by 12 months.
	
	newannualsalary = oldannualsalary + retroactivepaydue;
	//the new annual salary after including retroactive pay is being calculated by the old annual salary plus the total retroactive pay due to the worker.
	
	newmonthlysalary = retroactivepaypermonth;
	//the new monthly salary is the same as the retroactive pay per month due to the worker.
	
	cout << "\n";
	
	cout << "The amount of retroactive pay per month due to you is $" << retroactivepaypermonth << "\n";
	cout << "The total amount of retroactive pay due to you is $" << retroactivepaydue << "\n";
	cout << "\n";
	cout << "Your old annual salary is $" << oldannualsalary << "\n";
	cout << "Your new annual salary is $" << newannualsalary << "\n";
	cout << "\n";
	
	//All the values that have been defined previously is being printed here for the old and new annual salary, the retroactive pay per month and the total retroactive pay.
	
	if(statement == 1)
	{
		cout << "Since January salary is received, your retroactive pay applies to the following months.\n";
		cout << "Your monthly salary with retroactive pay from February to July will be $" << newmonthlysalary << "\n";
		
	}
	
	if(statement == 0)
	{
		cout << "Since January salary has not been received, your retroactive pay applies from this current month.\n";
		cout << "Your monthly salary with retroactive pay from January to June will be $" << newmonthlysalary << "\n";
		
	}
	
	//The final if statement shows the monthly salary according to the fact if the January salary has been received or not.
	//The months where the retroactive pay also changes if the January pay had been received or not.
	//If January pay had been received the retroactive pay applies for the following 6 months.
	//If January pay had not been received the retroactive pay applies for January and the 5 months following it.
}


