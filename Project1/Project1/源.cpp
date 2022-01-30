#include<iostream>
using namespace std;
inline void swap(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 0;
	int b = 4;
	swap(a, b);
	cout << a << b;
	return 0;
}