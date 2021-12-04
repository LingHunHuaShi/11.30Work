#include <iostream>
using namespace std;
int main()
{
double mile = 0;
double gallon = 0;
double tmile = 0;
double tgallon = 0;
cout << "Enter miles driven,-1 to quit)";
cin >> mile;
while(mile != -1)
{cout << "Enter gallons used:";
cin >> gallon;
double MGP = mile/gallon;
tmile += mile;
tgallon +=gallon;
double tMGP = tmile/tgallon;
cout << "MGP this trip:" << MGP <<endl;
cout << "Total MGP:" << tMGP <<endl;
cout << endl << "Enter miles driven,-1 to quit)";
cin >> mile;}
return 0;
system("pause");
}