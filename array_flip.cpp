/*
PRN - 22070123092

C++ program to flip the array.

*/

# include <iostream>
using namespace std;

int main() {
    int marks[10] = {60, 67, 89, 96, 80, 45, 96, 82, 94, 76};
    int flip[10];
    int j = 0;
    for (int i = 9; i >= 0; --i)
    {
        flip[j] = marks[i];
        j++;
    }
    for (int i =0; i<10; i++) {
        cout << flip[i] << " "; 
    }
    // cout << flip[9];
    return 0;
}
/*
Output:
76 94 82 96 45 80 96 89 67 60 
*/  