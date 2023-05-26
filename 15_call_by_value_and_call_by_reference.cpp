#include <iostream>
using namespace std;

// void swap(int* a, int* b); //Call by reference using pointers
void swapRef(int &a, int &b); // Call by reference using reference variables

int main()
{
    int num1 = 5, num2 = 4;
    cout << "Value of num1 before swap " << num1 << endl;
    cout << "Value of num2 before swap " << num2 << endl;
    // swap(&num1, &num2);
    swapRef(num1, num2);
    cout << "Value of num1 after swap " << num1 << endl;
    cout << "Value of num2 after swap " << num2 << endl;

    return 0;
}

/* void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}*/

// Call by reference using reference variables
void swapRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}