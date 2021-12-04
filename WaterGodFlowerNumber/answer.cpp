#include <iostream>
using namespace std;
int main()
{
     char A = 'y';
     cout << "寻找水仙花数 Ver0.0.1" <<endl;
     cout << "键入y并按Enter以继续：";
     cin >> A;
     if (A == 'y')
     {
         int num = 100;
    
     while (num < 1000)
     {
         int a = num % 10;
         int b = (num / 10) % 10;
         int c = num / 100;
         if (num == a*a*a+b*b*b+c*c*c)
         { 
            cout << num <<endl;
         }
         {num++;}
    
     }
     
     system("pause");
     return 0;
     }
     else
      {
         system("pause");
     return 0;
     }
}