#pragma once
#include <iostream>
#include<string>
using namespace std;
class stuHmWk
{
private:
	string m_name;
	int m_classNum;
	int m_stuNum;
	double m_Wk[5];
	double m_avgWk = (m_Wk[1] + m_Wk[2] + m_Wk[3] + m_Wk[4] + m_Wk[0]) / 5;

public:
	void setname(char name[]);
	void setStuNum(int Num);
	void setClassNum(int Num);
	void setWk(double num[]);
	string getName();
	int getClassNum();
	int getStuNum();
	double getWk(int num);
	double getAvgWk();
}£»


