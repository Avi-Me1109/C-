//Avi Raj Balam
//Lab 6 - Question 1
//Date: 03-15-2022
//Grades Calculator

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ifstream inMyFile ("grades.txt");
	if(!inMyFile)
	{
		cerr << "File could not be opened" << endl;
		exit( EXIT_FAILURE);
	}
	//getting the file
	
			
	string name;
	int test1, test2, finals;
	float averaget1, averaget2, averagef, medianf, mediant1, mediant2;
	int testone = 0, testtwo = 0, fina1s = 0;
	string coursecode;
	int a[8], b[8], c[8];
	int i = 0, highest = 0;
	//declaration of variables
	
	
	
		while(inMyFile >> name >> coursecode >> test1 >> test2 >> finals)
		{
			testone += test1;
			testtwo += test2;
			fina1s += finals;
			
			a[i] = test1;
			b[i] = test2;
			c[i] = finals;
			i++;
			
		}
		//assigning values to arrays depednig on what they are

		
	for(int i = 0; i < 8; i++)
	{
		if(a[0] > a[i])
			a[0];
		else
			a[0] = a[i];
		
		if(b[0] > b[i])
			b[0];
		else
			b[0] = b[i];
		
		if(c[0] > c[i])
			c[0];
		else
			c[0] = c[i];
	}
	
	cout << "Highest number test one: " << a[0] << "\n";	
	cout << "Highest number test two: " << b[0] << "\n";	
	cout << "Highest number finals: " << c[0] << "\n";	
	//calculating highest number in each test
	
	
	averaget1 = testone / 8.00;
	averaget2 = testtwo / 8.00;
	averagef = fina1s / 8.00;
	//calculating average
	
	cout << "Test one average: " << averaget1 << "\n";
	cout << "Test two average: " << averaget2 << "\n";
	cout << "Finals average: " << averagef << "\n";
	
	for(int i=0; i<8; i++)
    {
		for(int j=i+1; j<8; j++)
        {
            if(a[j] < a[i])
            {
                int temp;
				temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
			
			if(b[j] < b[i])
            {
                int temp;
				temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
			
			if(c[j] < c[i])
            {
                int temp;
				temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
	//rearranging the values from smallest to largest
	
	mediant1 = (a[3] + a[4]) / 2.00;
	mediant2 = (b[3] + b[4]) / 2.00;
	medianf = (c[3] + c[4]) / 2.00;
	//calculating mediant as the number of items in the sequence is even.
	
	cout << "Median Test One: " << mediant1;
	cout << "Median Test Two: " << mediant2;
	cout << "Median Test Three: " << medianf;
	
}