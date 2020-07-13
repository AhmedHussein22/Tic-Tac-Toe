/*TIC TAC TOE with c++
Dr. Mohammed Khfagy
__>>>Team:
1- Ahmed Hussein Elsayed
2-Ahmed Sayed Ahmed
3-Abd elaleem Hegag Abd elaleem
4-Mohammed Rizk Mohammed
5-Mahmoud Awd Abd elhameed
*/

#include <iostream>
#include<string>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };//global variable for all program
char player = 'x';//global variable for all program for player

void printmatrix()
{
	system("cls");
	cout << "\n\n";
	cout << "\t\t\t    TIC TAC TOE\n";
	cout << "\t\t\t*-*-*-*-*-*-*-*-*-*" << "\n" << "\n";
	cout << "\t\t\t____________________\n";
	cout << "\t\t\t      |      |      \n";
	cout << "\t\t\t  " << matrix[0][0] << "   |  " << matrix[0][1] << "   |  " << matrix[0][2] << "\n";
	cout << "\t\t\t______|______|______\n";
	cout << "\t\t\t      |      |      \n";
	cout << "\t\t\t  " << matrix[1][0] << "   |  " << matrix[1][1] << "   |  " << matrix[1][2] << "\n";
	cout << "\t\t\t______|______|______\n";
	cout << "\t\t\t      |      |      \n";
	cout << "\t\t\t  " << matrix[2][0] << "   |  " << matrix[2][1] << "   |  " << matrix[2][2] << "\n";
	cout << "\t\t\t      |      |      \n\n\n";

}

void input()
{
	char position;
	string temp;
	do
	{

		cout << "choose your position _ player ( " << player << " ):";
		cin >> temp;

		if (temp.size() > 1)
		{
			position = '0';
			continue;
		}
		position = temp[0];

		bool found = false;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (matrix[i][j] == position)
				{
					matrix[i][j] = player;
					found = true;
				}
			}
		}
		if (!found)
		{
			position = '0';
		}
	} while (!(position >= '1'&&position <= '9'));

	if (player == 'x')
		player = 'o';
	else
		player = 'x';
}

void user_computer()
{
	// 1- to start
	if (matrix[1][1] != 'x'&&matrix[1][1] == '5')
	{
		matrix[1][1] = 'o';
		return;
	}
	else if (matrix[1][1] == 'x'&&matrix[0][2] == '3')
	{
		matrix[0][2] = 'o';
		return;
	}
	// 2- to win
	//row 0
	if (matrix[0][0] == 'o'&&matrix[0][2] == 'o'&&matrix[0][1] == '2')
	{
		matrix[0][1] = 'o';
		return;
	}
	else if (matrix[0][0] == 'o'&&matrix[0][1] == 'o'&&matrix[0][2] == '3')
	{
		matrix[0][2] = 'o';
		return;
	}
	else if (matrix[0][1] == 'o'&&matrix[0][2] == 'o'&&matrix[0][0] == '1')
	{
		matrix[0][0] = 'o';
		return;
	}
	//row 1
	else if (matrix[1][0] == 'o'&&matrix[1][2] == 'o'&&matrix[1][1] == '5')
	{
		matrix[1][1] = 'o';
		return;
	}
	else if (matrix[1][0] == 'o'&&matrix[1][1] == 'o'&&matrix[1][2] == '6')
	{
		matrix[1][2] = 'o'; return;
	}
	else if (matrix[1][1] == 'o'&&matrix[1][2] == 'o'&&matrix[1][0] == '4')
	{
		matrix[1][0] = 'o'; return;
	}
	//row 2
	else if (matrix[2][0] == 'o'&&matrix[2][2] == 'o'&&matrix[2][1] == '8')
	{
		matrix[2][1] = 'o'; return;
	}
	else if (matrix[2][0] == 'o'&&matrix[2][1] == 'o'&&matrix[2][2] == '9')
	{
		matrix[2][2] = 'o'; return;
	}
	else if (matrix[2][1] == 'o'&&matrix[2][2] == 'o'&&matrix[2][0] == '7')
	{
		matrix[2][0] = 'o'; return;
	}

	//column 0
	else if (matrix[0][0] == 'o'&&matrix[2][0] == 'o'&&matrix[1][0] == '4')
	{
		matrix[1][0] = 'o'; return;
	}
	else if (matrix[0][0] == 'o'&&matrix[1][0] == 'o'&&matrix[2][0] == '7')
	{
		matrix[2][0] = 'o'; return;
	}
	else if (matrix[1][0] == 'o'&&matrix[2][0] == 'o'&&matrix[0][0] == '1')
	{
		matrix[0][0] = 'o'; return;
	}
	//column 1
	else if (matrix[0][1] == 'o'&&matrix[2][1] == 'o'&&matrix[1][1] == '5')
	{
		matrix[1][1] = 'o'; return;
	}
	else if (matrix[0][1] == 'o'&&matrix[1][1] == 'o'&&matrix[2][1] == '8')
	{
		matrix[2][1] = 'o'; return;
	}
	else if (matrix[1][1] == 'o'&&matrix[2][1] == 'o'&&matrix[0][1] == '2')
	{
		matrix[0][1] = 'o'; return;
	}
	//column 2
	else if (matrix[0][2] == 'o'&&matrix[2][2] == 'o'&&matrix[1][2] == '6')
	{
		matrix[1][2] = 'o'; return;
	}
	else if (matrix[0][2] == 'o'&&matrix[1][2] == 'o'&&matrix[2][2] == '9')
	{
		matrix[2][2] = 'o'; return;
	}
	else if (matrix[1][2] == 'o'&&matrix[2][2] == 'o'&&matrix[0][2] == '3')
	{
		matrix[0][2] = 'o'; return;
	}
	//main diameter
	else if (matrix[0][0] == 'o' && matrix[1][1] == 'o'&&matrix[2][2] == '9')
	{
		matrix[2][2] = 'o'; return;
	}
	else if (matrix[0][0] == 'o' && matrix[2][2] == 'o'&&matrix[1][1] == '5')
	{
		matrix[1][1] = 'o'; return;
	}
	else if (matrix[2][2] == 'o' && matrix[1][1] == 'o'&&matrix[0][0] == '1')
	{
		matrix[0][0] = 'o'; return;
	}
	// imaginary diameter
	else if (matrix[0][2] == 'o'&&matrix[1][1] == 'o'&&matrix[2][0] == '7')
	{
		matrix[2][0] = 'o'; return;
	}
	else if (matrix[2][0] == 'o'&&matrix[1][1] == 'o'&&matrix[0][2] == '3')
	{
		matrix[0][2] = 'o'; return;
	}
	else if (matrix[0][2] == 'o'&&matrix[2][0] == 'o'&&matrix[1][1] == '5')
	{
		matrix[1][1] = 'o'; matrix[0][0] == '1'; return;
	}

	// 3- to defense
	//row 1
	if (matrix[0][0] == 'x'&&matrix[0][2] == 'x'&&matrix[0][1] == '2')
	{
		matrix[0][1] = 'o';
		return;
	}
	else if (matrix[0][0] == 'x'&&matrix[0][1] == 'x'&&matrix[0][2] == '3')
	{
		matrix[0][2] = 'o';
		return;
	}
	else if (matrix[0][1] == 'x'&&matrix[0][2] == 'x'&&matrix[0][0] == '1')
	{
		matrix[0][0] = 'o';
		return;
	}
	//row 2
	else if (matrix[1][0] == 'x'&&matrix[1][2] == 'x'&&matrix[1][1] == '5')
	{
		matrix[1][1] = 'o';
		return;
	}
	else if (matrix[1][0] == 'x'&&matrix[1][1] == 'x'&&matrix[1][2] == '6')
	{
		matrix[1][2] = 'o';
		return;
	}
	else if (matrix[1][1] == 'x'&&matrix[1][2] == 'x'&&matrix[1][0] == '4')
	{
		matrix[1][0] = 'o';
		return;
	}
	//row 3
	else if (matrix[2][0] == 'x'&&matrix[2][2] == 'x'&&matrix[2][1] == '8')

	{
		matrix[2][1] = 'o';
		return;
	}
	else if (matrix[2][0] == 'x'&&matrix[2][1] == 'x'&&matrix[2][2] == '9')

	{
		matrix[2][2] = 'o';
		return;
	}
	else if (matrix[2][1] == 'x'&&matrix[2][2] == 'x'&&matrix[2][0] == '7')
	{
		matrix[2][0] = 'o';
		return;
	}
	//column 1
	else if (matrix[0][0] == 'x'&&matrix[2][0] == 'x'&&matrix[1][0] == '4')
	{
		matrix[1][0] = 'o';
		return;
	}
	else if (matrix[0][0] == 'x'&&matrix[1][0] == 'x'&&matrix[2][0] == '7')
	{
		matrix[2][0] = 'o';
		return;
	}
	else if (matrix[1][0] == 'x'&&matrix[2][0] == 'x'&&matrix[0][0] == '1')
	{
		matrix[0][0] = 'o';
		return;
	}
	//column 2
	else if (matrix[0][1] == 'x'&&matrix[2][1] == 'x'&&matrix[1][1] == '5')
	{
		matrix[1][1] = 'o';
		return;
	}
	else if (matrix[0][1] == 'x'&&matrix[1][1] == 'x'&&matrix[2][1] == '8')
	{
		matrix[2][1] = 'o';
		return;
	}
	else if (matrix[1][1] == 'x'&&matrix[2][1] == 'x'&&matrix[0][1] == '2')
	{
		matrix[0][1] = 'o';
		return;
	}
	//column 3
	else if (matrix[0][2] == 'x'&&matrix[2][2] == 'x'&&matrix[1][2] == '6')
	{
		matrix[1][2] = 'o';
		return;
	}
	else if (matrix[0][2] == 'x'&&matrix[1][2] == 'x'&&matrix[2][2] == '9')
	{
		matrix[2][2] = 'o';
		return;
	}
	else if (matrix[1][2] == 'x'&&matrix[2][2] == 'x'&&matrix[0][2] == '3')
	{
		matrix[0][2] = 'o';
		return;
	}
	//main diameter
	else if (matrix[0][0] == 'x' && matrix[1][1] == 'x'&&matrix[2][2] == '9')
	{
		matrix[2][2] = 'o';
		return;
	}
	else if (matrix[0][0] == 'x' && matrix[2][2] == 'x'&&matrix[1][1] == '5')
	{
		matrix[1][1] = 'o';
		return;
	}
	else if (matrix[2][2] == 'x' && matrix[1][1] == 'x'&&matrix[0][0] == '1')
	{
		matrix[0][0] = 'o';
		return;
	}
	// imaginary diameter
	else if (matrix[0][2] == 'x'&&matrix[1][1] == 'x'&&matrix[2][0] == '7')
	{
		matrix[2][0] = 'o';
		return;
	}
	else if (matrix[2][0] == 'x'&&matrix[1][1] == 'x'&&matrix[0][2] == '3')
	{
		matrix[0][2] = 'o';
		return;
	}
	else if (matrix[0][2] == 'x'&&matrix[2][0] == 'x'&&matrix[1][1] == '5')
	{
		matrix[1][1] = 'o';
		return;
	}




	//random play
	//row1
	if (matrix[0][0] == '1'&& matrix[0][1] == '2'&& matrix[0][2] == 'o')
	{
		matrix[0][0] = 'o';
		return;
	}

	else if (matrix[0][0] == '1'&& matrix[0][2] == '3'&& matrix[0][1] == 'o')
	{
		matrix[0][0] = 'o'; return;
	}

	else if (matrix[0][1] == '2'&& matrix[0][2] == '3'&& matrix[0][0] == 'o')
	{
		matrix[0][1] = 'o'; return;
	}

	//row2
	else if (matrix[1][0] == '4'&& matrix[1][1] == '5'&& matrix[1][2] == 'o')
	{
		matrix[1][0] = 'o'; return;
	}

	else if (matrix[1][0] == '4'&& matrix[1][2] == '6'&& matrix[1][1] == 'o')
	{
		matrix[1][0] = 'o'; return;
	}

	else if (matrix[1][1] == '5'&& matrix[1][2] == '6'&& matrix[1][0] == 'o')
	{
		matrix[1][1] = 'o'; return;
	}

	//row3
	else if (matrix[2][0] == '7'&& matrix[2][1] == '8'&& matrix[2][2] == 'o')
	{
		matrix[2][0] = 'o'; return;
	}

	else if (matrix[2][0] == '7'&& matrix[2][2] == '9'&& matrix[2][1] == 'o')
	{
		matrix[2][0] = 'o'; return;
	}

	else if (matrix[2][1] == '8'&& matrix[2][2] == '9'&& matrix[2][0] == 'o')
	{
		matrix[2][1] = 'o'; return;
	}

	//column1
	if (matrix[0][0] == '1'&& matrix[1][0] == '4'&& matrix[2][0] == 'o')
	{
		matrix[0][0] = 'o'; return;
	}

	else if (matrix[0][0] == '1'&& matrix[2][0] == '7'&& matrix[1][0] == 'o')
	{
		matrix[0][0] = 'o'; return;
	}

	else if (matrix[1][0] == '4'&& matrix[2][0] == '7'&& matrix[0][0] == 'o')
	{
		matrix[1][0] = 'o'; return;
	}

	//column2
	if (matrix[0][1] == '2'&& matrix[1][1] == '5'&& matrix[2][1] == 'o')
	{
		matrix[0][1] = 'o'; return;
	}

	else if (matrix[0][1] == '2'&& matrix[2][1] == '8'&& matrix[1][1] == 'o')
	{
		matrix[0][1] = 'o'; return;
	}

	else if (matrix[1][1] == '5'&& matrix[2][1] == '8'&& matrix[0][1] == 'o')
	{
		matrix[1][1] = 'o'; return;
	}


	//column3
	if (matrix[0][2] == '3'&& matrix[1][2] == '6'&& matrix[2][2] == 'o')
	{
		matrix[0][2] = 'o'; return;
	}

	else if (matrix[0][2] == '3'&& matrix[2][2] == '9'&& matrix[1][2] == 'o')
	{
		matrix[0][2] = 'o'; return;
	}

	else if (matrix[1][2] == '6'&& matrix[2][2] == '9'&& matrix[0][2] == 'o')
	{
		matrix[1][2] = 'o'; return;
	}


	//main diameter

	if (matrix[0][0] == '1'&& matrix[1][1] == '5'&& matrix[2][2] == 'o')
	{
		matrix[0][0] = 'o'; return;
	}

	else if (matrix[0][0] == '1'&& matrix[2][2] == '9'&& matrix[1][1] == 'o')
	{
		matrix[0][0] = 'o'; return;
	}

	else if (matrix[1][1] == '5'&& matrix[2][2] == '9'&& matrix[0][0] == 'o')
	{
		matrix[1][1] = 'o'; return;
	}


	//imaginary diameter

	if (matrix[0][2] == '3'&& matrix[1][1] == '5'&& matrix[2][0] == 'o')
	{
		matrix[0][2] = 'o'; return;
	}

	else if (matrix[0][2] == '3'&& matrix[2][0] == '7'&& matrix[1][1] == 'o')
	{
		matrix[0][2] = 'o'; return;
	}

	else if (matrix[1][1] == '5'&& matrix[2][0] == '7'&& matrix[0][2] == 'o')
	{
		matrix[1][1] = 'o'; return;
	}



}
char whoWin()
{
	int countX = 0, countO = 0, counter = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (matrix[i][j] != 'x'&& matrix[i][j] != 'o')counter++;
			if (matrix[i][j] != 'x' || matrix[i][j] != 'o'){ counter++; }

			if (matrix[i][j] == 'x')
				countX++;
			else if (matrix[i][j] == 'o')
				countO++;
			if (countX == 3 || countO == 3){
				return countX > countO ? 'x' : 'o';
			}
		}
		countX = 0;
		countO = 0;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (matrix[j][i] == 'x')
				countX++;
			else if (matrix[j][i] == 'o')
				countO++;
			if (countX == 3 || countO == 3){
				return countX > countO ? 'x' : 'o';
			}
		}
		countX = 0;
		countO = 0;
	}
	if (matrix[0][0] == 'x' && matrix[1][1] == 'x' && matrix[2][2] == 'x') return 'x';
	else if (matrix[0][0] == 'o' && matrix[1][1] == 'o' && matrix[2][2] == 'o') return 'o';
	else if (matrix[2][0] == 'x' && matrix[1][1] == 'x'&& matrix[0][2] == 'x') return 'x';
	else if (matrix[2][0] == 'o' && matrix[1][1] == 'o'&& matrix[0][2] == 'o') return 'o';
	if (counter == 0)return'z';

	return '.';
}
int main()
{
	int playerOrComp;//choose game type
	char b;//variable for playing again 
	
	do{
		system("color 07");
		cout << "1 - Player VS Player\n2 - Player VS Computer\n";
		cin >> playerOrComp;
		if (playerOrComp == 1)
		{
			cout << "Which player would play first ? (x/o) : ";
			cin >> player;
		}
		char c = '1';// redisplay matrix from(1:9)
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrix[i][j] = c;
				c++;
			}
		}
		char ch;//to receive winner(X or O)
		bool win = false;//to check for a winner
		printmatrix();
		for (int i = 0; i < 9; i++)

		{
			if (playerOrComp == 2)
			{
				if (i % 2 == 0)
				{
					input();
					player = 'x';
				}
				else
					user_computer();
			}

			else
				input();
			printmatrix();
			ch = whoWin();
			if (ch == 'x' || ch == 'o')
			{
				system("color 5b");
				cout << "\n The winner is player (" << whoWin() << ")" << endl;
				cout << "   congratulation " << endl << endl;
				win = true;
				break;

			}
		}
		if (!win)
		{
			system("color 47");
			cout << "\n Draw \n";
		}
		cout << "Do you want to play again ? (Y/N) : ";
		cin >> b;
	} while (b == 'y' || b == 'Y');
	return 0;
}