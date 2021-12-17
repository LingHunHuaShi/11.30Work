#include<iostream>
using namespace std;
#include<Windows.h>
void output(int p[][7])
{
	for (int i = 0; i < 7; ++i)
	{
		for (int j = 1; j < 7; j++)
			cout << p[i][j]<<" ";
		cout << endl;
	}
}

void setup(int p[][7])
{
	for (int i = 1; i < 7; ++i)
	{
		for (int j = 1; j < 7; j++)
			p[i][j]=1;
	}
}
int main()
{
	int p[7][7], i, j, x, y=0;
	setup(p);
	string n[7] = { "US","UK","France","German","Italy","Russia" };
	int a, b, c, d, e, f;
	p[1][1] = p[1][3] = p[1][4] = p[1][6] = 0;
	p[2][1] = p[2][3] = p[2][4] = 0;
	p[3][1] = p[3][3] = p[3][4] = p[3][5] = p[3][6] = 0;
	p[5][1] = p[5][4] = p[5][6] = 0;
	p[6][4] = 0;
	for (int i = 1; i < 7; ++i)
		p[0][i] = 1;
	for (int i = 0; i < 7; i++)
		p[i][0] = 2;
	while (p[0][1] + p[0][2] + p[0][3] + p[0][4] + p[0][5] + p[0][6] > 0)
	{
		for (i = 1; i < 7; i++)
		{
			if (p[0][i])
			{
				int counter = 0;
				for (j=1; j < 7; j++)
				{
					if (p[j][i])
					{
						x = j;
						y = i;
						counter++;
					}
				}
				if (counter == 1)
				{
					for (int t = 1; t < 7; ++t)
					{
						if (t != i)
						{
							p[x][t] = 0;
							p[0][y] = 0;
						}
					}
				}
			}
		}

	}
	output(p);
	char peo = 'A';
	for (int i = 1; i < 7; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (p[i][j])
			{
				cout << peo << " is from " << n[j - 1]<<endl;
				peo++;
			}
		}
	}
	return 0;
}