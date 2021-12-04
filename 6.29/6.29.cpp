#include <iostream>
#include <math.h>
using namespace std;
bool sushu(int a)
{
    for (int i = 1; i < sqrt(a); i++)
    {
        if (a % i == 0)
            return 1;
    }
    return 0;
}

int main()
{
    int a = 1;
    cout << "select a mode\n"
         << "1.judge\n"
         << "2.print\n";
    cin >> a;
    switch (a)
    {
    case 1:
        int num;
        cout << "enter an integer:";
        cin >> num;
        if (sushu(num))
            cout << "true" << endl;
    case 2:
    for (int x =2;x< 10000;x++)
    {
        if(sushu(x))
        cout <<x<<"\t";
    }
    }
}