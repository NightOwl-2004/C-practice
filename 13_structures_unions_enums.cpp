#include <iostream>
using namespace std;

// Structure
struct employee
{
    int eId;
    char favChar;
    int salary;
};

// Union
union money
{
    int rice;
    char car;
    int pounds;
};

int main()
{
    // Declaring a structure
    struct employee aniket;
    aniket.eId = 01;
    aniket.favChar = 'k';
    aniket.salary = 2000000;
    cout << aniket.eId << endl;
    cout << aniket.favChar << endl;
    cout << aniket.salary << endl;

    // Declaring a union
    union money m1;
    m1.rice = 33;
    cout << m1.rice << endl;
    // Below value will be wrong
    //  cout << m1.car << endl;
    //  cout << m1.pounds << endl;

    // Enums
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    return 0;
}