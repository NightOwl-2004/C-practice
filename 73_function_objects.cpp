#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    //* Function objects are functions wrapped in classes so that it is available like an object
    //* Function objects are also known as Functor.
    
    int arr [] = {1, 73, 4, 2, 54, 7};
    // sort(arr, arr+5); This will sort array upto the 5th position, elements after it won't be sorted
    sort(arr, arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    
    
    return 0;
}