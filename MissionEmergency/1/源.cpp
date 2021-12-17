#include<iostream>
using namespace std;
int main()
{
	for (int a=0; a <= 1; a++)
	{
		for (int b=0; b <= 1; b++)
		{
			for (int c=0; c <= 1; c++)
			{
				for (int d=0; d <= 1; d++)
				{
					for (int e=0; e <= 1; e++)
					{
						for (int f=0; f <= 1; f++)
						{
							if (a + b > 1 && a + d != 2 && a + e + f == 2 && (b + c == 0 || b + c == 2) && c + d == 1 && (d + e == 0 || d == 1))
								cout << a << b << c << d << e << f;
						}
					}
				}
			}
		}
	}
}