#include <iostream>
using namespace std;
int main()
{
    double num1 = 0;
    double num2 = 0;
    char modcal = 'a';
    cout << "请输入运算模式（a.加、b.减、c.乘、d.除、e.乘方）:" ;
    cin >> modcal;
    cout << "请输入第一个数（x）：" ;
    cin >> num1;
    cout << "请输入第二个数（y）：" ;
    cin >> num2;
    double sum1 = num1 + num2;
    cout << "两数字和为" << sum1 <<endl;
    system("pause");
    return 0;


}