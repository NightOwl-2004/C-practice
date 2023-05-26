#include <iostream>
using namespace std;

int main()
{
    int* p = new int(40);
    cout << "The value at address p is " << *(p) << endl;
    
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;

    cout << "The value at address arr[0] is " << arr[0] << endl;
    cout << "The value at address arr[1] is " << arr[1] << endl;
    cout << "The value at address arr[2] is " << arr[2] << endl;

    return 0;
}