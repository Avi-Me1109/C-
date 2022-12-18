#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <stdio.h>

int main()
{
	int decision;
	string usn, pwm;
	char choice = 'N', choice1;
	int number = 0;
	int size;
	
	cout << "Welcome to Admin Software.\n";
	cout << "What would you like to do today?\n";
	cout << "1. Register\n";
	cout << "2. Login\n";
	cout << "3. Logoff\n";
	cout << "Enter decision: ";
	cin >> decision;
	
	ifstream Filein ("Details1.txt", ios::in);
	
	while (getline(Filein, usn))
	{
		number++;
	}
	
	Filein.close();
	
	
	
	if(decision == 1)
	{
		cout << "You have chosen to register.\n";
		cout << "Enter a username (one word please): ";
		cin >> usn;	
		
		ofstream File2 ("Details1.txt", ios::app);
		
		File2 << usn << "\n";;
		
		File2.close();
		
		cout << "Enter a password(max length (8): ";
		cin >> pwm;
		
		ofstream File3 ("Details2.txt", ios::app);
		
		File3 << pwm << "\n";
		
		File3.close();
		
		cout << "Congrats! You have succesfully registered\n";
		cout << "Please run the program again to access Admin Software.";
	}
	
	if(decision == 2)
	{
		string usnaa[100], pwmaa[100];
		string usna, pwma;
		
		int usnd, password_break;
		
		cout << "You have chosen to login. \n";
		do{
			cout << "Enter your username: ";
			cin >> usn;
			
			ifstream Filea ("Details1.txt", ios::in);
			
			for (int i = 0; i <= number; i++)
			{
				Filea >> usna;
				usnaa[i] = usna;
			}
			
			Filea.close();
			
			for (int i = 0; i <= number; i++)
			{
				if(usnaa[i] == usn)
				{
					usnd = 1;
					password_break = i;
					break;
				}
				
				else
				{
					usnd = 0;
				}
			}
			
			if(usnd == 1)
			{
				do{
					cout << "Enter your password: ";
					cin >> pwm;
					
					ifstream Filea2 ("Details2.txt", ios::in);
					
					for (int i = 0; i <= number; i++)
					{
						Filea2 >> pwma;
						pwmaa[i] = pwma;
					}
					
					Filea2.close();

				
					if(pwmaa[password_break] == pwm)
					{
						cout << "You have succesfully logined!\n";
						cout << "You can now access the Admin Software...";
						choice = 'N';
						break;
					}
					
					else
					{
						cout << "Sorry thats the wrong passsword.\n";
						cout << "Do you want to try again? (Enter 'Y' or 'N')\n";
						cout << "If you wish to enter no, try registering!\n";
						cout << "Answer: ";
						cin >> choice1;
					}
				}while(choice1 == 'Y');
			}
			
			if(usnd == 0)
			{
				cout << "Sorry no username matched.\n";
				cout << "Do you wish to try again? (Enter 'Y' or 'N'): ";
				cin >> choice;
			
			}
			
			
			
		}while (choice == 'Y');
		
	}
	
	if(decision == 3)
	{
		cout << "Logging Off...";
		cout << "Have a good day";
	}
	
}


