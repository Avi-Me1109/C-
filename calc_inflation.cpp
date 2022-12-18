#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

struct item 
	{									
	string name;
	double oneYear;
	double today;
	};
	
double findInflation(double, double);	//function to find inflation
	
int main()
{
	item item;
	int loop; 
	double inflation;
	fstream inputStream;
	
	inputStream.open("prices.txt");
	
	inputStream >> loop;    			//first line dictates how many items there are
	
	for (int c = 0; c < loop; c++)		//loop as many times as the number of items
	{
	inputStream >> item.name>> item.oneYear >> item.today;		//acquire name, old price and current price
	
	cout <<"Item Name: " << item.name;
	cout << "Current Price : $" << item.today; 
	inflation = findInflation(item.oneYear, item.today);
	cout << "Inflation rate : " << inflation;
	}											
	inputStream.close();
}

double findInflation (double oneYear, double current)
{
	double inflation =   ((current - oneYear)/current) * 100.00
		cout.setf(ios::fixed);								
		cout.setf(ios::showpoint);
		cout.precision(1);				//set to 1 decimal place
		
	return inflation;					//returns inflation rate
	
}

	