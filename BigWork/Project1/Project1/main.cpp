#include<iostream>
#include<string>
#include"student.h"
using namespace std;

bool login()
{
	string account = "admin2021", password = "adminadmin000",pswd,accnt;

		cout << "enter your anncount:";
		cin >> accnt;
		cout << "enter your password:";
		cin >> pswd;
		if (accnt == account && pswd == password)
			return 1;
		else
			return 0;
}


int main()
{

	cout << "welcome\n";
	while(bool login())


	return 0;
}