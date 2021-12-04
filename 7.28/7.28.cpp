#include <iostream>
#include<string>
using namespace std;
bool testPalindrome(char word[],int i, int size)
{
    while(i != size-1-i)
    {
    if (word[i]==word[size-1-i])
        return testPalindrome(word,i+1);
    else
        return false;
    }
    return true;
}

int main()
{
    char word[10000];
    cout <<"enter a string:";
    cin >>word;
    if (testPalindrome(word,0,strlen(word)))
    cout << "this is a Palindrome.\n";
    else
    cout <<"this is not a Palindrome.\n";
    return 0;
}