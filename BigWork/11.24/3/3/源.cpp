#include<iostream>
#include <string>
using namespace std;

class student
{
public:
	int stuNum;
	string name;
	int scr;
};

void swap(student* stu1, student* stu2)
{
	student temp = *stu1;
	*stu2 = *stu1;
	*stu1 = temp;
}

void sort(student stu[],int N)
{
	for (int i = 0; i < N-1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (stu[j].scr < stu[j + 1].scr)
				swap(stu[j], stu[j + 1]);
			else if (stu[j].scr == stu[j + 1].scr)
			{
				if(stu[j].stuNum > stu[j + 1].stuNum)
					swap(stu[j], stu[j + 1]);
			}
		}
	}
}

int main()
{
	student stu[100];
	student* PtrStu = stu;
	cout << "请输入学生个数：";
	int N;
	cin >> N;
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "请输入学生学号：";
		cin >> stu[i].stuNum;
		cout << "请输入学生姓名：";
		cin >> stu[i].name;
		cout << "请输入学生分数：";
		cin >> stu[i].scr;
		cout << endl;
	}
	sort(PtrStu,N);
	cout << endl << "姓名：\t" << "学号\t" << "成绩：\t" << endl;

	for (int i = 0; i < N; i++)
	{
		cout << stu[i].name << "\t" << stu[i].stuNum << "\t" << stu[i].scr << "\t\n";
	}
}