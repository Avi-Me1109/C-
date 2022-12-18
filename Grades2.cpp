#include <iostream>
using namespace std;

int main()
{
	int grade, Acount = 0, Bcount = 0, Ccount = 0, Dcount = 0, Ecount = 0, count = 1;
	
	
	do{
		
		std:cout << "Enter grade: ";
		cin >> grade;
		
		switch (grade){
		case 50:
		case 49:
		case 48:
		case 47:
		case 46:
		case 45:
		
			Ecount++;
			break;
		
		case 60:
			
				Dcount++;
			
			break;
		
		
		case 70:
			
				Ccount++;
		
			break;
		
		case 80:
			Bcount++;
			break;
		
		case 90:
			Acount++;
		break;
		}
		
		
		count++;
	}while(count < 6);
	
	cout << "The number of A grades is " << Acount << "\n";
	cout << "The number of B grades is " << Bcount << "\n";
	cout << "The number of C grades is " << Ccount << "\n";
	cout << "The number of D grades is " << Dcount << "\n";
	cout << "The number of E grades is " << Ecount << "\n";
}	