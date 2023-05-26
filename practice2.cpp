#include <iostream>
using namespace std;

class Parent
{
    public:
    virtual void display(){
        cout << "I am parent class function" << endl;
    }
};

class Child : public Parent{
    public:
    void display(){
        cout << "I am child class function" << endl;
    }
};


int main()
{
    Parent *obj1;
    Child obj2;

    obj1 = &obj2;
    obj1->display();
    return 0;
}
