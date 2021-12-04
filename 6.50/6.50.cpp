#include <iostream>
using namespace std;

int triplebyvalue(int a)
{
    return a*3;
}

int triplebyreference(int &a)
{
    return a*3;
}


int main()
{
    int count,mode;
    cout <<"enter a number:";
    cin >> count;
    cout <<"select a mode(1.value  2.reference)";
    cin >> mode;
    switch (mode)
    {
        case 1:
        cout << triplebyvalue(count)<<endl;break;
        case 2:
        cout << triplebyreference(count)<<endl;break;
        default:
        break;
    }
    return 0;
}