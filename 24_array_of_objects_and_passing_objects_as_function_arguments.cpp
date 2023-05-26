#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        cout << "Enter id of the employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        salary = 22000;
        cout << "The id of this employee is " << id << endl;
    }
};

class ComplexNum
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(ComplexNum obj1, ComplexNum obj2)
    {
        a = obj1.a + obj2.a;
        b = obj1.b + obj2.b;
    }

    void printData(void)
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Employee company[4];

    for (int i = 0; i < 4; i++)
    {
        company[i].setId();
        company[i].getId();
    }

    ComplexNum c1, c2, c3;

    c1.setData(1, 2);
    c1.printData();

    c2.setData(3, 4);
    c2.printData();

    c3.setDataBySum(c1, c2);
    c3.printData();

    return 0;
}