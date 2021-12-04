#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    cout << "N\t" << "10*N\t" << "100*N\t" << "1000*N\t" << endl << endl;
    while (i <= 5)
    {
        cout << i << "\t" << 10 * i << "\t" << 100 * i << "\t" << 1000 * i << endl;
        i++;
    }
    return 0;
    system("pause");
}