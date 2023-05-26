#include <iostream>
using namespace std;

int main()
{
    int i;

    // There are 3 types of loops in C++

    // 1. For loop
    /*
    for(initialization;condition;update){
        body of loop
    }
    */
    for (i = 1; i <= 50; i++)
    {
        cout << i << endl;
    }

    // 2. While loop
    /*
    while(condition){
        body of loop
    }
    */

    // 3. do-while loop
    /*
    do{
        body of loop
    }while(condition);
    */
    return 0;
}