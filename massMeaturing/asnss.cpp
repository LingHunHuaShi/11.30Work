#include <iostream>
using namespace std;
#include <string>
int main()
{
    double massA = 0;
    double massB = 0;
    double massC = 0;
    char confirm = 'y';
    cout << "请输入整数A的数值:";
    cin >> massA;
    cout << endl << "请输入整数B的数值:";
    cin >> massB;
    cout << endl << "请输入整数C的数值:";
    cin >> massC;
    cout << "您输入的数值为:\tA "<< massA << endl << "\t\tB " << massB << endl << "\t\tC " << massC << endl;
    cout << "请确认数字[y/n]\n";
    cin >> confirm;
    if (confirm == 'y')
    {
        cout << "计算中" << endl;
        if ((massA > massB) & (massA > massC))
        {
            
            if(massB > massC)
            {cout << "A>B>C" << endl;}
            else if(massB = massC)
            {cout << "A>B=C" << endl;}
            else if(massB < massC)
            {cout << "A>C>B" << endl;}
            }
        else if ((massB > massA) & (massB > massC))
        {
           if(massA > massC) 
           {cout << "B>A>C" << endl;}
           else if(massA = massC) 
           {cout << "B>A=C" << endl;}
           else if(massA < massC) 
           {cout << "B>C>A" << endl;}
            }
        else if ((massC > massA) & (massC > massB))
        {
            if(massA > massB)
            {cout << "C>A>B" <<endl;}
            else if(massA = massB)
            {cout << "C>A=B" <<endl;}
            else if(massA < massB)
            {cout << "C>B>A" <<endl;}
        }
        else if (massA = massB = massC)
        {cout << "A=B=C" << endl;}
    }
    system("pause");
    return 0;
}