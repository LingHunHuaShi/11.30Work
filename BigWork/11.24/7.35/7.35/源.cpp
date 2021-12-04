#include<iostream>
#include<string>
using namespace std;


double avg(int num[])
{
	return (num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9]) / 10;
}

int calcsum(int num[])
{
	return num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9];
}

int findMax(int num[])
{
	int maxPos = 0 , max=0;
	for (int i = 0; i < 5; i++)
	{
		if (num[i] >= max)
			maxPos = i; max = num[i];
	}
	return maxPos;
}

int findMin(int num[])
{
	int minPos = 0, min = 0;
	for (int i = 0; i < 5; i++)
	{
		if (num[i] <= min)
			minPos = i; min = num[i];
	}
	return minPos;
}

int main()
{
	int rate[5][10];
	string topic[5] = { "The election","Environmental Pollution","Question3","Question4","Question5" };
	int sum[5];
	
	cout << "Welcome to Quenstionnaire System.\n";
	
	for (int i = 0; i < 10; i++)
	{
		cout << "\nInterviewee "<<i+1<<"\n";
		for (int j = 0; j < 5; j++)
		{
			cout << "Topic:" << topic[j] << endl;
			cin >> rate[j][i];
		}
	}

	cout << endl << endl << "Completed." << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << topic[i]<<":";
		for (int j = 0; j < 10; j++)
		{
			cout << rate[i][j]<<" ";
		}
		cout << avg(rate[i]) << endl;
		sum[i] = calcsum(rate[i]);
	}
	int scrMax = findMax(sum);
	int scrMin = findMin(sum);
	cout << "Topic winning the highest score:" << topic[scrMax] << " Score:" << calcsum(rate[scrMax]) << endl;
	cout << "Topic winning the lowest score:" << topic[scrMin] << " Score:" << calcsum(rate[scrMin]) << endl;
	return 0;
}