#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d, e = 0;
    cout << "请输入每日开的总英里数：";
    cin >> a;
    cout << "请输入每加仑汽油的价格：";
    cin >> b;
    cout << "请输入每加仑汽油可以开的平均英里数：";
    cin >> c;
    cout << "请输入每日停车费：";
    cin >> d;
    cout << "请输入每日通行费：";
    cin >> e;
    float fee = (a / c) * b + e + d;
    cout << "您每日开车的消费为：" << fee << endl;
    return 0;
    system("pause");
}