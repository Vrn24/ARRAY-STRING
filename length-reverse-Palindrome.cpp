/*22070123129*/
/*Varun Pagote*/
/*Palindrome*/
#include<iostream>
using namespace std;
int main()
{
    // To Find The length of string.
    string str1;
    int length = 0, j=0;
    cout << "Enter your name: ";
    cin >> str1;
    cout << "The inputted string is: " << str1 << endl;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        length += 1;
    }
    
    cout << "The size of the string is: " << length << endl;

    // To find the reversed string

    char rev_str[length];
    for (int i = length -1; i >= 0; i--)
    {
        rev_str[j] = str1[i];
        j++;
    }
    cout << "The reversed string is: " << rev_str << endl;

    // To find if a given string is Palindrome of not

    if (str1 == rev_str)
    {
         cout << "The inputted string is a Palindrome";
    }
    
    return 0;
}
