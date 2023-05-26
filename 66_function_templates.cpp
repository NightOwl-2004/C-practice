#include <iostream>
using namespace std;

template<class T>
void swapp(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swaping first one is " << a << " and second one is " << b << endl; 
}

int main()
{
    int num1 = 4, num2 = 5;
    char n1 = 'c', n2 = 'd';
    double no1 = 4.1, no2 = 5.5;

    swapp(num1, num2);
    swapp(n1, n2);
    swapp(no1, no2);
    
    return 0;
}    