#include <iostream>
using namespace std;
long power(int base, int exponent)
{
    if(exponent==1)
    return base;
    else 
    return base*power(base,exponent-1);

}

int main()
{
    int base,exponent;
    cout<<"enter a base and an exponent:";
    cin >> base >> exponent;
    cout<<"the power is:"<<power(base,exponent);
    return 0;
}