#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;


int main()
{
	ifstream inClientFile ("covid19.txt", ios::in);
	if(!inClientFile)
	{
		cerr << "File could not be opened" << endl;
		exit( EXIT_FAILURE);
	}
	
			
	string name;
	int date, day, month, year, year1, month1, day1;
	int cdeaths, cpositivecases, ctestperformed;
	string statecode;
	int i = 0;
	const unsigned int max = 20780;
	unsigned int a[max][7];
	string b[max];
	

	while(inClientFile >> date >> day >> month >> year >> statecode >> cdeaths >> cpositivecases >> ctestperformed)
	{
		a[i][0] = date;	
		i++;	
	}
	
	cout << a[0][0];
}

