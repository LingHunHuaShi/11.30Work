#include "student.h"

void stuHmWk::setname(char name[])
{
	stuHmWk::m_name = name;

}

void stuHmWk::setStuNum(int Num)
{
	stuHmWk::m_stuNum = Num;

}


void stuHmWk::setClassNum(int Num)
{
	stuHmWk::m_classNum = Num;
}

void stuHmWk::setWk(double num[])
{
	for (int i = 0; i < 4; i++)
	{
		stuHmWk::m_Wk[i] = num[i];
	}
}

string stuHmWk::getName()
{
	return m_name;
}

int stuHmWk::getClassNum()
{
	return m_classNum;
}

int stuHmWk::getStuNum()
{
	return m_stuNum;
}

double stuHmWk::getWk(int num)
{
	return m_Wk[num];
}

double stuHmWk::getAvgWk()
{
	return m_avgWk;
}
