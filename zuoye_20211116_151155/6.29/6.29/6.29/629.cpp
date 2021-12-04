#include<iostream>
#include<math.h>
using namespace std;
bool sushu(int a)
{
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
			return 0;

	}
	return 1;
}


int main()
{
	int mode = 1; int num = 0;
	cout << "select mode:\n 1.judge\n 2.print\n";
	cin >> mode;
	switch (mode)
	{
	case 1:
		
		cout << "enter a number:";
		cin >> num;
		if (sushu(num))
			cout << "true";
		else
			cout << "false";
		break;
	case 2:
		for (int a = 2; a <= 10000; a++)
		{
			if (sushu(a))
				cout << a << "\t";
		}
		break;
	default:
		break;
	}
}