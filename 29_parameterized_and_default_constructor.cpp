#include <iostream>
#include <math.h>
using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     Complex(int, int); //Parameterized constructor

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex :: Complex(int x, int y){
//     a = x;
//     b = y;
// }

class Point
{
    int x, y;
    friend int distance(Point, Point);
    static int count;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point " << ++count << " is (" << x << ", " << y << ")" << endl;
    }
};

int Point ::count;

int distance(Point p1, Point p2)
{
    int x1, x2, y1, y2;
    int dist;
    x1 = p1.x;
    x2 = p2.x;
    y1 = p1.y;
    y2 = p2.y;

    dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return dist;
}

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 5);
    q.displayPoint();

    cout << "The distance between two points is " << distance(p, q) << endl;
    /*
    //Implicit call
    Complex a1(4, 7);
    a1.printNumber();

    //Explicit call
    Complex b = Complex(4, 6);
    b.printNumber();
    */

    return 0;
}