#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
	public:
		float calculate(int a, int b)
		{
			float average;
			average = (a+b) / 2.00;
			return average;
		}
		
		void displayMessage(float av)
		{
			cout << "The average of the two test scores is " << av;
		}
		
};

int main()
{
	GradeBook student1;
	int test1, test2;
	float average1;
	
	cout << "Enter test 1 score: ";
	cin >> test1;
	
	cout << "Enter test 2 score: ";
	cin >> test2;
	
	average1 = student1.calculate(test1, test2);
	student1.displayMessage(average1);
}

