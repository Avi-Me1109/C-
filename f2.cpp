#include<iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ifstream inClientFile ("File1.txt", ios::in);
	
	if(!inClientFile)
	{
		cerr << "File could not be opened" << endl;
		exit( EXIT_FAILURE);
	}
	
	
	int account;
	string name;
	double balance;
	
	cout << "Account" << " " << "Name" << " " << "Balance" << "\n";
	
	while(inClientFile >> account >> name>> balance)
	{
		cout << account << " " << name << " " << balance << "\n";
	}
	
}

