/*
PRN - 22070123092

C++ program to find the sum and average of elements of array.

*/

# include <iostream>
using namespace std;

int main() {
    int marks[10] = {60, 67, 89, 96, 80, 45, 96, 82, 94, 76};
    float sum = 0;
    float avg = 0;
    for (int i = 0; i < 10; ++i)
    {
        sum += marks[i];
    }
    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << sum/10 << endl;
    return 0;
}
/*
Output:
The sum is: 785
The average is: 78.5 
*/