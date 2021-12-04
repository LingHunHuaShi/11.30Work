#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else 
    return gcd(b,b%a);

}


int main()
{
    int a,b;
    cout<<"enter two integers(from big to small):";
    cin >> a>>b;
    cout <<"the gcd of them is:"<<gcd(a,b);
    return 0;
}