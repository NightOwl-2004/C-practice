#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 6, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void displayData()
    {
        cout << "The value of data1, data2 and data3 is " << data1 << "," << data2 << " and " << data3 << endl;
    }
};

int main()
{
    Simple s1(1, 2, 3);
    s1.displayData();

    Simple s2(1, 22);
    s1.displayData();

    Simple s3(10);
    s2.displayData();

    return 0;
}