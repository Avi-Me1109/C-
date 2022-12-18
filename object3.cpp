#include <iostream>
#include <string>
using namespace std;

class Account
{
	public:
	explicit Account (float balance1)
		:determiner(balance1)
		{
			if(determiner < 0)
			{
				cout << "ERROR\n" << "Initial amount is lesser than 0\n";
				setbalance(0);
				cout << "Balance has been set to 0";
				
				cout << endl;
			}
			
			else
			{
				setbalance(determiner);
			}
		}
	void credit(float a)
	{
		setbalance(getbalance() + geta());
	}
	
	void debit(float b)
	{
		if(b > getbalance() || b < 0)
		{
			cout << "ERROR\n" << "'Debit' Amount has exceeded account balance";
		}
		
		else
		{
			setbalance(getbalance() - getb());
		}
	}
	
	void display()
	{
		cout << "The current balance in your account is " << getbalance();
	}
		
	int getbalance()
	{
		return balance;
	}
	
	void setbalance(int number)
	{
		balance = number;
	}
	
	int geta()
	{
		return a;
	}
	
	void seta(int number)
	{
		a = number;
	}
	
	int getb()
	{
		return b;
	}
	
	void setb(int number)
	{
		b = number;
	}
	
	private:
	float balance, determiner, a, b;
};

int main()
{
	Account obj1(-234);
	int a, b, c;
	
	do{
		cout << "Enter what you want to do\n";
		cout << "Credit an ammount --> 1\n";
		cout << "Debit an ammount --> 2\n";
		cout << "Check your current balance --> 3\n";
		cout << "To terminate --> 4\n";
		cout << "Option: ";
		cin >> a;
		
		cout << endl;
		
		if(a == 1)
		{	
			cout << "Enter your amount: ";
			cin >> b;
			obj1.seta(b);
			obj1.credit(b);
			cout << "Successful!";
			cout << endl;
		}
		
		if(a == 2)
		{
			cout << "Enter your ammount: ";
			cin >> c;
			obj1.setb(c);
			obj1.debit(c);
			cout << "Successful!";
			cout << endl;
		}
		
		if(a == 3)
		{
			obj1.display();
		}
		
	}while(a != 4);
		
}


		
	
	
	
	

		