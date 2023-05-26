#include <iostream>
using namespace std;

template <class T1 = int, class T2 = double, class T3 = char>
class Aniket
{
public:
    T1 a;
    T2 b;
    T3 c;

    Aniket(T1 x, T2 y, T3 z) : a(x), b(y), c(z) {}

    void display()
    {
        cout << "The value of a is " << a << " and its type is " << typeid(a).name() << endl;
        cout << "The value of b is " << b << " and its type is " << typeid(b).name() << endl;
        cout << "The value of b is " << c << " and its type is " << typeid(c).name() << endl;
    }
};

int main()
{
    Aniket a(1, 2.33, 'A');
    a.display();
        cout << endl;

    Aniket<double, int, float> b(22.33, 3, 44.1);


    b.display();


    return 0;
}