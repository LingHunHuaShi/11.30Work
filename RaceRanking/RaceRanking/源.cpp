#include<iostream>
using namespace std;

class person
{
public:
	int id;
	double time;
};

void Crank(person a[])
{
	int i, j;
	person temp;
	for (j = 0; j < 12 - 1; j++)
	{
		for (i = 0; i < 12 - 1 - j; i++)
			if (a[i].time > a[i + 1].time)
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
	}
}

int main()
{
	person a[12];
	for (int i = 0; i < 12; ++i)
	{
		cin >> a[i].id >> a[i].time;
	}
	Crank(a);
	for (int i = 0; i < 12; i++)
	{
		cout << "排名：" << i + 1 << " 运动员号：" << a[i].id << " 时间：" << a[i].time << endl;
	}
}