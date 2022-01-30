#include<iostream>
#include<time.h>
#include<string>
using namespace std;
char op[4] = { '+','-','*','/' };
float calculate(float x, float y, int op)
{
	float s=0;    //定义运算后得到的结果
	switch (op)  //判断进行哪种运算
	{
	case 0:
		s = x + y;
		break;
	case 1:
		s = x - y;
		break;
	case 2:
		s = x * y;
		break;
	case 3:
		if (y != 0)
			s = x / y;
		break;
	}
	return s;  //返回得到的计算结果
}


float cal1(float a, float b, float c, float d, int op1, int op2, int op3)
{
	float t1, t2, t3;
	t1 = calculate(a, b, op1);    //调用calculate函数
	t2 = calculate(t1, c, op2);
	t3 = calculate(t2, d, op3);
	return t3;
}
//对应公式2 (A#(B#C))#D
float cal2(float a, float b, float c, float d, int op1, int op2, int op3)
{
	float t1, t2, t3;
	t1 = calculate(b, c, op2);   //调用calculate函数
	t2 = calculate(a, t1, op1);
	t3 = calculate(t2, d, op3);
	return t3;
}
//对应公式3 A#(B#(C#D))
float cal3(float a, float b, float c, float d, int op1, int op2, int op3)
{
	float t1, t2, t3;
	t1 = calculate(c, d, op3);    //调用calculate函数
	t2 = calculate(b, t1, op2);
	t3 = calculate(a, t2, op1);
	return t3;
}
//对应公式4 A#((B#C)#D)
float cal4(float a, float b, float c, float d, int op1, int op2, int op3)
{
	float t1, t2, t3;
	t1 = calculate(b, c, op2);    //调用calculate函数
	t2 = calculate(t1, d, op3);
	t3 = calculate(a, t2, op1);
	return t3;
}
//对应公式5 (A#B)#(C#D)
float cal5(float a, float b, float c, float d, int op1, int op2, int op3)
{
	float t1, t2, t3;
	t1 = calculate(a, b, op1);    //调用calculate函数
	t2 = calculate(c, d, op3);
	t3 = calculate(t1, t2, op2);
	return t3;
}

void giveCard(float card[4])
{
	srand(unsigned int(time(NULL)));
	card[0] = rand() % 13 + 1;
	card[1] = rand() % 13 + 1;
	card[2] = rand() % 13 + 1;
	card[3] = rand() % 13 + 1;
}

int calc24(float a, float b, float c, float d)
{
	int op1, op2, op3;   //定义公示中的三个运算符
	int flag = 0;
	
	for (op1 = 0; op1 < 4; op1++)
	{
		for (op2 = 0; op2 < 4; op2++)
		{
			for (op3 = 0; op3 < 4; op3++)
			{
				if (cal1(a, b, c, d, op1, op2, op3) == 24)
				{
					cout << '(' << '(' << a << op[op1] << b << ')' << op[op2] << c << ')' << op[op3] << d << '=' << 24 << endl;
					flag = 1;

				}
				if (cal2(a, b, c, d, op1, op2, op3) == 24)
				{
					cout << '(' << a << op[op1] << '(' << b << op[op2] << c << ')' << ')' << op[op3] << d << '=' << 24 << endl;
					flag = 1;
				}
				if (cal3(a, b, c, d, op1, op2, op3) == 24)
				{
					cout << a << op[op1] << '(' << b << op[op2] << '(' << c << op[op3] << d << ')' << ')' << '=' << 24 << endl;
					flag = 1;
				}
				if (cal4(a, b, c, d, op1, op2, op3) == 24)
				{
					cout << a << op[op1] << '(' << '(' << b << op[op2] << c << ')' << op[op3] << d << ')' << '=' << 24 << endl;
					flag = 1;
				}
				if (cal5(a, b, c, d, op1, op2, op3) == 24)
				{
					cout << '(' << a << op[op1] << b << ')' << op[op2] << '(' << c << op[op3] << d << ')' << '=' << 24 << endl;
					flag = 1;
				}
			}
		}
	}
	return flag;
}

int main()
{
	float card[4];
	giveCard(card);
	cout << "Random Cards:" << card[0] << " " << card[1] << " " << card[2] << " " << card[3] << endl;
	cout << "满足的式子如下所示:" << endl;
	int flag;
	calc24(card[0], card[1], card[2], card[3]);
	calc24(card[0], card[1], card[3], card[2]);
	calc24(card[0], card[2], card[1], card[3]);
	calc24(card[0], card[2], card[3], card[1]);
	calc24(card[0], card[3], card[1], card[2]);
	calc24(card[0], card[3], card[2], card[1]);
	calc24(card[1], card[0], card[2], card[3]);
	calc24(card[1], card[0], card[3], card[2]);
	calc24(card[1], card[2], card[3], card[0]);
	calc24(card[1], card[2], card[0], card[3]);
	calc24(card[1], card[3], card[2], card[0]);
	calc24(card[1], card[3], card[0], card[2]);
	return 0;
}