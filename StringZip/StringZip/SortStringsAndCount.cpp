#include<iostream>
using namespace std;
#include<string>

void sort(char string[],int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i > 0 && string[i] == string[i - 1])
			continue;
		else {
			for (int j = size - 1; j > i; j--)
			{
				if (string[j] == string[i])
				{
					char temp = string[j];
					int k;
					for (k = j; k > i; k--)
					{
						string[k] = string[k - 1];
					}
					string[k] = temp;
				}
			}
		}
	}
}

void outputCount(char string[],int size)
{
	for (int i = 0; i < size; i++)
	{
		int counter,base=0;
		for (counter = 1; string[i] == string[i + counter]; counter++)
		{ }
        cout << string[i] << counter;
		i += (counter-1);
	}
}

int main()
{
	cout << "enter a string:";
	char string[100],sorted[100];
	cin >> string;
	sort(string,strlen(string));
	cout << string << endl;
	outputCount(string, strlen(string));
}
