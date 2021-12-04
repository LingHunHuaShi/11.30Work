#include <iostream>
using namespace std;
extern int a = 0, b = 0, c = 0;
void calc(char str[])
{
	for (int i = 0; i <= strlen(str); i++)
	{
		if (str[i] == '1')
			a++;
		else if (str[i] == '2')
			b++;
		else if (str[i] == '3')
			c++;
	}
}


int main()
{

	char str[1000];
	cout << "enter an integer:";
	cin >> str;
	calc(str);
	cout << a<<" "<<b<<" "<<c << endl;
}