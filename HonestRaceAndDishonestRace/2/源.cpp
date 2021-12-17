#include<iostream>
using namespace std;
int main()
{
	for (int a = 0; a <= 1; a++)
	{
		for (int b = 0; b <= 1; b++)
		{
			for (int c = 0; c <= 1; c++)
			{
				if ((a && a + b + c == 2 || !a && a + b + c != 2) && (b && a + b + c == 1 || !b && a + b + c != 1) && (c && a + b + c == 1 || !c && a + b + c != 1))
					cout << a << b << c;
			}
		}
	}
}