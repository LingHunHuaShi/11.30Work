#include <iostream>
#include<string>
using namespace std;

void sort(char string[4][100])
{
        for (int i = 0; i < 3; ++i)
    {
            for (int j = 0; j < 3 - i; ++j)
        {
                if (strcmp(string[j], string[j + 1]) > 0)
            {
                    swap(string[j], string[j + 1]);
            }
        }
    }
}

int main()
{
char string[4][100];
for(int i=0;i<4;i++)
{
    cin >> string[i];
}
for(int i=0;i<4;i++)
{
    cout<<string[i]<<endl;

}
return 0;
}