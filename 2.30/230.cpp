#include <iostream>
using namespace std;
int main()
{
    double height = 0;
    double weight = 0;
    cout << "输入身高(m)：";
    cin >> height;
    cout << "输入体重(kg)：";
    cin >> weight;
    double bmi = weight / (height * height);
    if (bmi < 18.5)
    {
        cout << "您偏瘦";
    }
    else if (bmi >= 18.5 && bmi <= 25)
    {
        cout << "您的BMI正常";
    }
    else if (bmi > 25 && bmi <= 30)
    {
        cout << "您偏胖";
    }
    else if (bmi > 30)
    {
        cout << "您属于肥胖";
    }
    return 0;
    system("pause");
}