#include <iostream>
using namespace std;
int main()
{
    int counter = 0;
    double number, largest = 0;
    while (counter < 10)
    {
        cout << "Enter a number:";
        cin >> number;
        if (counter = 0 || number > largest)
        {
            largest = number;
        }
        counter++;
    }
    cout << "The largest number is" << largest << endl;
    return 0;
    system("pause");
}