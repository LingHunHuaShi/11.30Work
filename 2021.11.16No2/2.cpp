#include <iostream>
#include <math.h>
using namespace std;
bool sushu(int a)
{
	if (a == 1)
		return 0;
	else
	{
		for (int i = 2; i <= sqrt(a); i++)
		{
			if (a % i == 0)
				return 0;
		}
		return 1;
	}
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void paixu(int num[], int length)
{
	for (int j = 0; j < length - 1; j++)
	{
		for (int i = 0; i < length - 1 - j; i++)
		{
			if (num[i] >= num[i + 1])
				swap(num[i], num[i + 1]);
		}
	}
}

int main()
{
	static int length;
	cout << "Enter number of numbers:";
	cin >> length;
	int num[length];
	for (int i = 0; i < length; i++)
	{
		cin >> num[i];
		if (!sushu(num[i]))
			num[i] = 0;
	}

	paixu(num, length);

	for (int i = 0; i < length; i++)
	{
		if (num[i] != 0)
			cout << num[i] << " ";
	}
	return 0;
}