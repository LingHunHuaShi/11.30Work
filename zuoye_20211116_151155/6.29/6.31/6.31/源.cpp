#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	for (int i = 1; i <= a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
			return i;
	}
}


int main()
{
	int a, b;
	cout << "enter two numbers:";
	cin >> a >> b;
	cout << "GCD of the two numbers is:" << gcd(a, b) << endl;
	return 0;
}