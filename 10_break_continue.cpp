#include <iostream>
using namespace std;

int main()
{
    // Break keyword
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }

    // Continue keyword
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}