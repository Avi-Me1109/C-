#include <iostream>
using namespace std;

int main()
{
	int grade, Acount = 0, Bcount = 0, Ccount = 0, Dcount = 0, Ecount = 0, count = 1;
	
	do{
		
		std:cout << "Enter grade: ";
		cin >> grade;
		
		if(grade < 60){
			Ecount++;
		}
		
		if(grade >= 60){
			if(grade < 70){
				Dcount++;
			}
		}
		
		if(grade >= 70){
			if(grade < 80){
				Ccount++;
			}
		}
		
		if(grade >= 80){
			if(grade < 90){
				Bcount++;
			}
		}
		
		if(grade >= 90){
			Acount++;
		}
		
		count++;
	}while(count < 6);
	
	cout << "The number of A grades is " << Acount << "\n";
	cout << "The number of B grades is " << Bcount << "\n";
	cout << "The number of C grades is " << Ccount << "\n";
	cout << "The number of D grades is " << Dcount << "\n";
	cout << "The number of E grades is " << Ecount << "\n";
}	