#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    // Static value is shared by every object
    // They are also known as class variables

public:
    void setData(void)
    {
        cout << "Enter employee id" << endl;
        cin >> id;
        count++;
    }

    void getData()
    {
        cout << "The id of this employee is " << id << endl;
    }

    // Static methods in class
    // It has access of only other static member variables or methods
    static void dispCount(void)
    {
        // cout << id; This will throw an error
        cout << "The value of count is " << count << endl;
    }
};

// int Employee :: count = 1000; If value is to be initialized it should be done here
int Employee :: count; // Static variables should also be declared outside class
// Static variable is by default initialized from 0 i.e. default value is 0

int main()
{
    Employee aniket, e1, e2;
    aniket.setData();
    aniket.getData();
    Employee::dispCount();

    e1.setData();
    e1.getData();
    Employee::dispCount();

    e2.setData();
    e2.getData();
    Employee::dispCount();

    return 0;
}