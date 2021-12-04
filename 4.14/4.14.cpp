#include <iostream>
using namespace std;
int main()
{
    int account;
    double bbalance,tcharges,tcredit,limit,nbalance;
    cout << "Enter Account Number(or -1 to quit):";
    cin >> account;
    while (account != -1)
    {
        cout << "Enter beginning balance:";
        cin >> bbalance;
        cout << "Enter total charges:";
        cin >> tcharges;
        cout << "Enter total credits:";
        cin >> tcredit;
        cout << "Enter credit limit:";
        cin >> limit;
        nbalance = bbalance + tcharges - tcredit;
        cout << "New balance is " << nbalance << endl;
        if (nbalance > limit)
        {
            cout <<"Credit Limit Exceeded." << endl;
        }
        cout <<endl << "Enter Account Number(or -1 to quit):";
        cin >> account;
    }
    return 0;
    system ("pause");
}