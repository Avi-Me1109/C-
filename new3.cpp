#include <iostream>
using namespace std;

int main()
{
	int count = 0, sum = 0, grade = 0, numberofstudents = 0, i;
	float average;
	
	
	while (grade != -1)
	{
		sum = sum + grade;
		
	
		numberofstudents = numberofstudents++;
		
		
		cout << "Enter student grade: ";
		cin >> grade;
	}
	
	//sum = sum + 1;
	numberofstudents = numberofstudents -1;
	average = sum / numberofstudents;
	
	cout << "The total grade is: " << sum << "\n";
	cout << "The class average is: " << average << "\n";
	
}

