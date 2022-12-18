//Avi Raj Balam
//Lab 7 - Question 1
//Date: 04-11-2022
//Diving Simulation

#include <iostream>
using namespace std;

class Diver
{
	public:
	float get_score(int a)
	{
		return judge[a];
	}
	
	void set_score(float score, int i)
	{
		judge[i] = score;
	}
	
	float get_finalscore()
	{
		return final_score;
	}
	
	void set_finalscore(float score)
	{
		final_score = score;
	}
	
	float get_judgescore()
	{
		return judge_scores;
	}
	
	void set_judgescore(float score)
	{
		judge_scores = score;
	}
	//multiple get and set functions with the similar purpose to return and set each of the private variable stated in class diver
	void disregard()
	{
		int temp = get_score(0);
		for(int i = 0; i < 7; i++)
		{
			if(temp > get_score(i))
			{
				temp = get_score(i);
			}
		}
		
		int temp1 = get_score(0);
		for(int i = 0; i < 7; i++)
		{
			if(temp1 < get_score(i))
			{
				temp1 = get_score(i);
			}
		}
		//two for functions that identify the highest and lowest scores and saves it in temp and temp1
		
		for(int i = 0; i < 7; i++)
		{
			if(get_score(i) == temp1 || get_score(i) == temp)
			{
				set_score(0, i);
			}
		}//sets the value of score at position i in the array to zero
	}//a disregard function to make the highest and lowest score become zero so that it is disregarded
	
	void calculator(float diff)
	{
		int z;
		for(int i = 0; i < 7; i++)
		{
			float b;
			b += get_score(i);
			set_judgescore(b);
		}// a for loop to find the total of all the judge score, since the highest and lowest have been zero they do not involve in the tota;
		
		set_finalscore(get_judgescore() * diff * 0.6);
		//sets the final score with the total judge scores times the difference times 0.6
		
	}// a calculator function that calculates the total score of  the diver after all judge scores for one try.
	
	void output()
	{
		cout << "The final score for the diver is: " << get_finalscore();
	}//outputting the final score value
	
	protected:
	float judge[7], final_score, judge_scores;
	//declaring private variables to use in class diver
};//defining and declaring class diver

class DiverChild : public Diver
{
	public:
	void set_score(float score, int i)
	{
		judge[i] = score;
		cout << "You have entered the score " << score << "\n";
	}
};

int main()
{
	float a, b = 0, c = 0, d = 0, difficulty;
	DiverChild diver1, diver2, diver3;
	//declaring classes and the variables required
	
	for(int i = 0; i < 6; i++)
	{
		cout << "This is round " << i+1 << " for all three divers\n";
		
		cout << "Enter diver 1 dive's difficulty: ";
		cin >> difficulty;
		//stating round and diver
		
		cout << "Diver 1 Assesment\n";
		for(int i = 0; i < 7; i++)
		{
			cout << "Judge " << i+1 << "\n";
			cout << "Enter Diver score:";
			cin >> a;
			cout << endl;
			
			diver1.set_score(a, i);
		}// a for loop that inputs all the judges scores for diver 1 and sets it in the array of class diver
		
		diver1.disregard();
		//calling function disregard of class diver
		diver1.calculator(difficulty);
		//calling function difficulty of class diver
		diver1.output();
		//calling function output of class diver
		b += diver1.get_finalscore();
		//b is an accumululative number that figures out the total score of diver 1 for all the 5 turns
		cout << "\n";
		
		cout << "Enter diver 2 dive's difficulty: ";
		cin >> difficulty;
		
		cout << "Diver 2 Assesment\n";
		for(int i = 0; i < 7; i++)
		{
			cout << "Judge " << i+1 << "\n";
			cout << "Enter Diver score:";
			cin >> a;
			cout << endl;
			
			diver2.set_score(a, i);
		}
		
		diver2.disregard();
		diver2.calculator(difficulty);
		diver2.output();
		c += diver2.get_finalscore();
		cout << "\n";
		//repeating all the earlier codes but with diver 2 and c being the cummulative number
		
		cout << "Enter diver 3 dive's  difficulty: ";
		cin >> difficulty;
		
		cout << "Diver 3 Assesment\n";
		for(int i = 0; i < 7; i++)
		{
			cout << "Judge " << i+1 << "\n";
			cout << "Enter Diver score:";
			cin >> a;
			cout << endl;
			
			diver3.set_score(a, i);
		}
		
		diver3.disregard();
		diver3.calculator(difficulty);
		diver3.output();\
		d += diver3.get_finalscore();
		cout << "\n";
		//repeating all the earlier codes but with diver 3 and d being the cummulative number 
	}//a large for loop to give 5 turns for each diver
	
	cout << "The final scores after all rounds for each diver is: \n";
	cout << "Diver 1: " << b << endl;
	cout << "Diver 2: " << c << endl;
	cout << "Diver 3: " << d << endl;
	//outputting the cummulative numbers b, c and d that represent the total scores  for all 5 dives for diver 1, diver 2 and diver 3 respectively
	
}

	