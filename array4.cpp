#include <iostream>
using namespace std;

int winner(int row[])
{
	if(row[0] == row[1] && row[0] == row[2])
		return 1;

	else if(row[3] == row[4] && row[3] == row[5])
		return 2;

	else if(row[6] == row[7] && row[6] == row[8])
		return 3;

	else if(row[0] == row[4] && row[0] == row[8])
		return 4;

	else if(row[2] == row[4] && row[2] == row[6])
		return 5;

	else if(row[0] == row[3] && row[0] == row[6])
		return 6;

	else if(row[0] == row[4] && row[0] == row[8])
		return 7;

	else if(row[2] == row[4] && row[2] == row[6])
		return 8;

	else
		return 9;
}

void output_winner(int a, char array2[])
{
	if(a==1)
	{
		if(array2[0] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==2)
	{
		if(array2[3] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==3)
	{
		if(array2[6] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==4)
	{
		if(array2[0] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==5)
	{
		if(array2[3] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==6)
	{
		if(array2[6] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==7)
	{
		if(array2[0] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==8)
	{
		if(array2[4] == 'x')
			cout << "Winner is x";

		else
			cout << "Winner is o";
	}

	if(a==9)
	{
		cout << "No winner yet.\n";
	}

}

int main()
{
	char row1[]= {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	int row2[9];
	char character;
	int position, determiner;


	cout << row1[0] << " " << row1[1] << " " << row1[2] << "\n";
	cout << row1[3] << " " << row1[4] << " " << row1[5] << "\n";
	cout << row1[6] << " " << row1[7] << " " << row1[8] << "\n";

	cout << "(0 to 2) is the first row\n";
	cout << "(3 to 5) is the second row\n";
	cout << "(6 to 8) is the third row\n";
	cout << "The numbers are the individual places horizontally\n";

	for(int i = 0; i <= 8; i++)
	{

		cout << "Enter the position:";
		cin >> position;



		if (row1[position] == ' ')
		{
			cout << "Enter x or o:";
			cin >> character;
			row1[position] = character;
			if(character == 'x')
			{
				row2[position] = 1;
			}

			if(character == 'o')
			{
				row2[position] = 0;
			}
		}


		else
			cout << "This space has already been filled\n";

		cout << "Current board\n";
		cout << row1[0] << " " << row1[1] << " " << row1[2] << "\n";
		cout << row1[3] << " " << row1[4] << " " << row1[5] << "\n";
		cout << row1[6] << " " << row1[7] << " " << row1[8] << "\n";

		determiner = winner(row2);
		output_winner(determiner, row1);

		if(determiner < 9)
			break;

		else
			continue;
	}
}

