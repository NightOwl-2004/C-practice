#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
};

/*
 derived class syntax
 class derived_class_name : visibility_mode base_class_name{
    class members/methods
 }
 Note:
 1.Default visibilty mode is private
 2.Private visibilty mode: Public members of the base class becomes private members of the derived class
 3.Public visibilty mode: Public members of the base class becomes public members of the derived class
 4.Private members of the base class are never inherited!!!
 */

class Programmer : Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee aniket(1), harry(2);
    cout << aniket.salary << endl;
    cout << harry.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();

    return 0;
}