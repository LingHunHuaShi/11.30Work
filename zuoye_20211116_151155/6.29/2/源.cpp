#include <iostream>
#include <math.h>
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

void swap(int a, int b)
{
	int temp = a;
	b = a;
	a = temp;
}
void paixu(int *num[],int length)
{
	for (int j = length; j > 0; j++)
	{
		for (int i = 0; i <= j; i++)
		{
			if (*num[i + 1] <= *num[i])
				swap(*num[i], *num[i + 1]);
		}
	}
}

int main()
{
	static int length;
	cout <<"Enter number of numbers:";
	cin >> length;
	int num[length];
    for(int i=0;i<length;i++)
	{
		cin >> num[i];
	}
	for(int i=0 ;i<length;i++)
	{
		cout << num[i];
	}
}