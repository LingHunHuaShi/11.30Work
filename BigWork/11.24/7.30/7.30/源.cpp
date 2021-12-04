#include<iostream>
using namespace std;
int printArray(char arr[], int st, int ed)
{
	cout << arr << endl;;
	if (st >= ed)
		return 0;
	else
		printArray(arr, st + 1, ed - 1);
}

int main()
{
	int st, ed;
	char word[1000];
	cout << "enter a starting number and a ending number:";
	cin >> st >> ed;
	cout << "enter a string:";
	cin >> word;
	printArray(word, st, ed);
	return 0;
}