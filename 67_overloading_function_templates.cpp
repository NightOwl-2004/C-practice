#include <iostream>
using namespace std;

void func(int a){
    cout << "I am first function() " << a << endl;
}

template <class T>
void func(T a){
    cout << "I am a function() using template " << a << endl;
}

template <class Y>
void func1(Y a){
    cout << "I am a function() using template " << a << endl;
}

int main()
{
    func(4); // ! Exact match takes the highest priority
    func1(4);
    
    return 0;
}