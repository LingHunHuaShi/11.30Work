#include<iostream>
using namespace std;
int main()
{
for (int b =1 ; b <= 9 ;b++)
{
for (int a =1 ; a <= b ; a++)
{
    cout << a << "*" << b << "=" << a*b << "  ";
}
cout << endl;
}
system("pause");
return 0;
}
