#include<iostream>
using namespace std;
#include<Windows.h>
#include<time.h>
string light[3] = { "红","黄","绿" };

void outcar(int car1, int car2)
{
	cout << "正向车流：" << car1 << "  反向车流：" << car2 << endl;
}

void output(string lt1,string lt2,string lt3,string lt4, int car1, int car2,int flag)
{
	system("cls");
	outcar(car1, car2);
	
	cout << "        | "<< lt3 <<" | " << endl;
	cout << "        |    |          " << endl;
	cout << "        |    |          " << endl;
	cout << "---------    ---------- " << endl;
	cout << lt4 << "                  " << lt2 << endl;
	cout << "---------    ---------- " << endl;
	cout << "        |    |          " << endl;
	cout << "        |    |          " << endl;
	cout << "        | " << lt1 << " | " << endl;
	if (car1 / car2 >= 3 || car2 / car1 >= 3)
		cout << "车流过多，绿灯时间延长" << endl;
	if (flag == 2)
		cout << "有紧急车辆" << endl;
	cout << endl << endl;
}

void change(string & lt1, string & lt2, string & lt3, string & lt4, int car1, int car2,int flag )
{
	if (lt1== "红"&&lt2=="绿")
	{
		for (int i = 0; i < 3; i++)
		{
			lt2 = lt4 = light[1];
			output(lt1, lt2, lt3, lt4,car1,car2, flag);
			Sleep(500);
			lt2 = lt4 = "  ";
            output(lt1, lt2, lt3, lt4, car1, car2, flag);
			Sleep(500);

		}
		lt2 = lt4 = light[0];
		lt1 = lt3 = light[2];
		output(lt1, lt2, lt3, lt4, car1, car2, flag);
	}
	else if(lt1=="绿"&&lt2=="红")
	{
		for (int i = 0; i < 6; i++)
		{
			lt1 = lt3 = light[1];
			output(lt1, lt2, lt3, lt4, car1, car2, flag);
			Sleep(250);
			lt1 = lt3 = "  ";
			output(lt1, lt2, lt3, lt4, car1, car2, flag);
			Sleep(250);
		}
		lt1 = lt3 = light[0];
		lt2 = lt4 = light[2];
		output(lt1, lt2, lt3, lt4, car1, car2, flag);
	}
}

int main()
{
	srand((unsigned int)time(NULL));

	string lt1 = light[0], lt2 = light[0], lt3 = light[0], lt4 = light[0];
	cout << "        | " << lt3 << " | " << endl;
	cout << "        |    |          " << endl;
	cout << "        |    |          " << endl;
	cout << "---------    ---------- " << endl;
	cout << lt4 << "                  " << lt2 << endl;
	cout << "---------    ---------- " << endl;
	cout << "        |    |          " << endl;
	cout << "        |    |          " << endl;
	cout << "        | " << lt1 << " | " << endl;
	Sleep(4000);
	lt1 = lt3 = light[2];
	system("cls");
	cout << "        | " << lt3 << " | " << endl;
	cout << "        |    |          " << endl;
	cout << "        |    |          " << endl;
	cout << "---------    ---------- " << endl;
	cout << lt4 << "                  " << lt2 << endl;
	cout << "---------    ---------- " << endl;
	cout << "        |    |          " << endl;
	cout << "        |    |          " << endl;
	cout << "        | " << lt1 << " | " << endl;
	while (1)
	{
		int car1 = rand() % 19+1;
		int car2 = rand() % 19+1;
		int flag = rand() % 4;
		int direction = rand() % 4;
		if (flag == 2)
		{
			if (direction == 1 || direction == 3)
			{
				lt1 = lt3 = light[2];
				lt2 = lt4 = light[0];
				output(lt1, lt2, lt3, lt4, car1, car2, flag);
				Sleep(3000);
				continue;
			}
			else
			{
				lt2 = lt4 = light[2];
				lt1 = lt3 = light[0];
				output(lt1, lt2, lt3, lt4, car1, car2, flag);
				Sleep(3000);
				continue;
			}

		}
		Sleep(5000);
		if (car1 / car2 >= 3 || car2 / car1 >= 3)
			Sleep(3000);
		change(lt1, lt2, lt3, lt4, car1 ,car2, flag);
	}
	return 0;
}