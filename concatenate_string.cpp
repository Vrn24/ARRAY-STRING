/*
PRN - 22070123092

C++ Program to concatenate string.

*/
#include<iostream>
using namespace std;
int main()
{
    string str1, str2, str3;
    int count = 0;
    cout << "Enter String 1: ";
    cin >> str1;
    cout << "Enter string 2: ";
    cin >> str2;
    str3 = str1 + str2;
    cout << str3 << endl;
    for (int i = 0; str3[i] != '\0'; i++)
    {
        count += 1;
    }
    
    cout << "The size of the concatenated string is: " << count;
    return 0;
}\