#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    cout << "请输入一个五位整数：";
    cin >> x;
    if (x > 9999 && x < 100000)
    {
        int a = x / 10000;
        int b = (x / 1000) % 10;
        int d = (x / 10) % 10;
        int e = x % 10;
        if(a==e&&b==d)
        {
            cout <<"这个数是回文数";
        }
        else{cout << "这个数不是回文数";}
    }
    return 0;
    system("pause");
}