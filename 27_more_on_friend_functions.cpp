#include <iostream>
using namespace std;

// class Y;

// class X
// {
//     int data;

// public:
//     void setValue(int value)
//     {
//         data = value;
//     }

//     friend void addData(X o1, Y o2);
// };

// class Y
// {
//     int num;

// public:
//     void setValue(int value)
//     {
//         num = value;
//     }
//     friend void addData(X o1, Y o2);
// };

// void addData(X o1,Y o2)
// {
//     cout << "Summing data of X and Y object gives me " << o1.data + o2.num << endl;
// }

class C2;

class C1
{
    int num1;
    friend void exchange(C1 &, C2 &);

public:
    void setValue(int value)
    {
        num1 = value;
    }

    void display()
    {
        cout << "The value of num1 is " << num1 << endl;
    }
};

class C2
{
    int num2;
    friend void exchange(C1 &, C2 &);

public:
    void setValue(int value)
    {
        num2 = value;
    }

    void display()
    {
        cout << "The value of num2 is " << num2 << endl;
    }
};

void exchange(C1 &obj1, C2 &obj2)
{
    int temp;
    temp = obj1.num1;
    obj1.num1 = obj2.num2;
    obj2.num2 = temp;
}

int main()
{
    // X a1;
    // a1.setValue(3);

    // Y b1;
    // b1.setValue(5);
    // addData(a1, b1);
    C1 a;
    a.setValue(13);

    C2 b;
    b.setValue(10);

    exchange(a, b);
    a.display();
    b.display();

    return 0;
}