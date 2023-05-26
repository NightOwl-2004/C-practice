#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {20, 21, 22, 23};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    // Pointers in arrays
    int arr[5] = {10, 11, 12, 13, 14};
    int *p = arr;

    cout << "The value of arr[0] is " << *p << endl;
    cout << "The value of arr[1] is " << *(p + 1) << endl;
    cout << "The value of arr[2] is " << *(p + 2) << endl;
    cout << "The value of arr[3] is " << *(p + 3) << endl;
    cout << "The value of arr[4] is " << *(p + 4) << endl;

    return 0;
}