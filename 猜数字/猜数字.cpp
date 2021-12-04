#include <iostream>
using namespace std;
int main()
{
	int a,b=43,c;
	cout<<"Please count a number(0-100)"<<endl;
	
	while(1)
	{
	cin>>a;
	if (a>b)
	{
	    cout<<"Too big"<<endl;
	 } 
	 if (a<b)
	 {
	 	cout<<"Too small"<<endl;
	 }
	 if (a==b)
	 {
	 	cout<<"congratulations!"<<endl;
	 }
	}
	
	 return 0;
}
