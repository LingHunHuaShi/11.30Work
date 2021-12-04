#include<iostream>
using namespace std;
int qualitypoints(int avg)
{
	switch (avg / 10)
	{
	case 10:
		return 4; break;
	case 9:
		return 4; break;
	case 8:
		return 3; break;
	case 7:
		return 2; break;
	case 6:
		return 1; break;
	default:
		return 0; break;
	}
}

int main()
{
	int score = 0;
	cout << "enter the avg score:";
	cin >> score;
	cout << "the qualitypoint is:" << qualitypoints(score) << endl;
	return 0;
}