#include<iostream>
#include<string>
using namespace std;
void unzip(char str[], int size)
{
    for (int i = 0; i < size-1; i += 2)
    {
        for (int j = 0; j <= (str[i+1] - '0'); ++j)
        {
            cout << str[i];
        }
    }
}

int main()
{
    char str[200];
    cin >> str;
    unzip(str, strlen(str));
}