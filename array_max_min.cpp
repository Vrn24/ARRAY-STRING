/*22070123129*/
/*Varun Pagote*/
/*
C++ program to find the maximum and the minimum value from the given array.
*/

# include <iostream>
using namespace std;

int main() {
    int marks[10] = {60, 67, 89, 96, 80, 45, 96, 82, 94, 76};
    int max =0;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i]>max)
        {
            max = marks[i];
        }
        
    }
    int min = max;
    for (int j = 0; j < 10; j++)
    {
        if (marks[j]<min)
        {
            min = marks[j];
        }
        
    }
    
    cout << "The greatest number is: " << max << endl;
    cout << "The smallest number is: " << min;
    return 0;
}
/*
Output:
The greatest number is: 96
The smallest number is: 45
*/
