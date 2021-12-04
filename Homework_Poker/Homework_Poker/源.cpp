#include<iostream>
#include<string>
#include<time.h>
using namespace std;

class Poker
{
public:
	char suit[10];
	char face[10];
};

void generatePoker(Poker poker[4][13])
{
	const char* suit[] = { "ºìÌÒ","·½Æ¬","ºÚÌÒ","Ã·»¨" };
	const char* face[] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
	for (int i = 0; i < 13; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			strcpy_s(poker[j][i].suit, suit[j]);
			strcpy_s(poker[j][i].face, face[i]);

		}
	}
}

void displayPoker(Poker poker[][13])
{
	for (int i = 0; i < 13; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << poker[j][i].suit << " " << poker[j][i].face << "\t";
		}
		cout << endl;
	}
}

void displayPoker1d(Poker poker[],int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << poker[i].suit << " " << poker[i].face << "   ";
		if ((i+1) % 4 == 0)
			cout << endl;
	}
}

void swap(Poker *poker1, Poker *poker2)
{
	Poker temp = *poker1;
	*poker1 = *poker2;
	*poker2 = temp;
}

void WashPoker(Poker *poker)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 1000; i++)
	{
		int num1 = rand() % 52;
		int num2 = rand() % 52;
		Poker temp = poker[num1];
		poker[num1] = poker[num2];
		poker[num2] = temp;
	}
}

void trans2to1(Poker poker[4][13],Poker poker1d[52])
{
	int counter = 0;
	for (int i = 0; i < 13; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			poker1d[counter++] = poker[j][i];
		}
	}
}

void distriPoker(Poker player1[18], Poker player2[17], Poker player3[17],Poker poker[52])
{
	for (int i = 0; i < 52; i++)
	{
		switch (i % 3)
		{
		case 0:
			player1[i / 3] = poker[i]; break;
		case 1:
			player2[i / 3] = poker[i]; break;
		case 2:
			player3[i / 3] = poker[i]; break;
		default:
			break;
		}
	}
}

int main()
{
	Poker poker[4][13];
	generatePoker(poker);
	displayPoker(poker);
	Poker poker1d[52];
	trans2to1(poker, poker1d);
	cout << endl << endl;
	WashPoker(poker1d);
	displayPoker1d(poker1d,52);
	Poker player1[18], player2[17], player3[17];
	distriPoker(player1, player2, player3, poker1d);
	cout << endl << "Player1:" << endl;
	displayPoker1d(player1, 18);
	cout << endl;
	cout << endl << "Player2:" << endl;
	displayPoker1d(player2, 17);
	cout << endl;
	cout << endl << "Player3:" << endl;
	displayPoker1d(player3, 17);
}