#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string a, b;
	int pass;
	char ab;
	
	cout << "Nuke Systems Offline\n";
	
	cout << "Enter name: ";
	cin >> a;
	
	cout << a << " enter your specific password: ";
	cin >> pass;
	
	if(pass == 1985)
	{
		cout << "Password accepted!\n";
		
		cout << "Nuke Systems Online\n";
		
		cout << "Enter country to nuke: ";
		cin >> b;
		
		cout << "Are you sure?";
		cin >> ab;
		
		if(ab == 'y')
		{
			cout << "..... Accepted response\n";
			cout << "Godspeed\n";
			
			cout << "tactical nuke launching in.....\n";
			
			for(int i = 5; i>=0; i--){
				if(i != 0)
				{
					cout << i << "!" << "\n";
				}
				
				else
					cout << "Launch confirmed!\n";
			}
			
			cout << "Launched!\n";
			
			cout << a << " has launched nuke to " << b << "\n";
		}
	}
	
	if(pass != 1985)
	{
		cout << "Intruder detected!\n";
		
		cout << "System will give 2 minutes to activate failsafe protocols\n";
		
		cout << "If not activated, bye bye\n";
	}
}

