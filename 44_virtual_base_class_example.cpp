#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int num)
    {
        roll_no = num;
    }

    void print_number()
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks()
    {
        cout << "You result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score()
    {
        cout << "Your PT score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result aniket;
    aniket.set_number(245);
    aniket.set_marks(78.9, 65.0);
    aniket.set_score(8);
    aniket.display();

    return 0;
}