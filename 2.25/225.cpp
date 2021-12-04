#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 0;
    cout << "请输入第一个整数:";
    cin >> a;
    cout << "请输入第二个整数:";
    cin >> b;
    if (a % b)
    {
        cout << "第一个数不是第二个数的倍数";
    }
    else
    {
        cout << "第一个数是第二个数的倍数";
    }
    return 0;
    system("pause");
}