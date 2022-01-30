#include<iostream>
#include<string>
#include<time.h>
using namespace std;

string chess[3][3] = { " "," "," "," "," "," "," "," "};
void game();
bool judge();
void compute();
int winner;
void output(string chess[3][3])
{
	system("cls");
	cout << chess[0][0] << "|" << chess[0][1] << "|" << chess[0][2] << endl;
	cout << "-+-+-" << endl;
	cout << chess[1][0] << "|" << chess[1][1] << "|" << chess[1][2] << endl;
	cout << "-+-+-" << endl;
	cout << chess[2][0] << "|" << chess[2][1] << "|" << chess[2][2] << endl;
}



int main()
{
	cout << "1.开始游戏\n2.退出游戏\n";
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		game();
	}
	else if (choice == 2)
		return 0;
	//output(chess);
	return 0;
}

bool judge()
{
	for (int i = 0; i < 3; i++)
	{
		if (chess[i][0] == chess[i][1] && chess[i][0] == chess[i][2] && chess[i][0] != " " && chess[i][1] != " " && chess[i][2] != " ")
		{
			if (chess[i][0] == "X")
				winner = 1;
			else
				winner = 2;
			return true;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (chess[0][i] == chess[1][i] && chess[0][i] == chess[2][i] && chess[0][i] != " " && chess[1][i] != " " && chess[2][i] != " ")
		{
			if (chess[0][i] == "X")
				winner = 1;
			else
				winner = 2;
			return true;
		}
	}
	if ((chess[0][0] == chess[1][1] && chess[0][0] == chess[2][2] && chess[0][0] != " " && chess[1][1] != " " && chess[2][2] != " ") || (chess[0][2] == chess[1][1] && chess[0][2] == chess[2][0] && chess[0][2] != " " && chess[1][1] != " " && chess[2][0] != " "))
	{
		if (chess[0][0] == "X")
			winner = 1;
		else
			winner = 2;
		return true;
	}
	else
	{
		bool mark = 1;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (chess[i][j] != " ")
					mark = 1;
				else
					return false;
			}
		}
		if (mark == 1)
		{
			winner = 0;
			return true;
		}
	}
		return false;
}


void game()
{
	int x, y;
	do
	{
		output(chess);
		flag1:
		cout << "请输入旗子坐标(x y)：";
		cin >> x >> y;
		if(chess[x-1][y-1]!="X"&&chess[x-1][y-1]!="O")
		chess[x-1][y-1] = "X";
		else
		{
			cout << "输入坐标已经有其他旗子，请重新输入：";
			goto flag1;
		}
	
		compute();
	} while (judge() == false);
	output(chess);
	if (winner == 1)
		cout << "你赢了！" << endl;
	else if (winner == 2)
		cout << "你输了！" << endl;
	else if (winner == 0)
		cout << "平局！" << endl;
}

void compute()
{
	srand(unsigned int (time(NULL)));
	int x = 0, y = 0;
	flag2:
		x = rand() % 3;
		y = rand() % 3;
		if (chess[x][y] != "O" && chess[x][x] != "X")
			chess[x][y] = "O";
		else
			goto flag2;
	
}