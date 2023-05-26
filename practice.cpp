#include <iostream>
#include <conio.h>
using namespace std;

int factorial(int num)
{
	if (num == 0 || num == 1)
	{
		return 1;
	}
	else
	{
		return num * factorial(num - 1);
	}
}

int main()
{
	cout << "Factorial of 5 is: " << factorial(5) << endl;
	getch();
	return 0;
}

class Add
{
	// Add obj(2, 5);
	// obj.sumDisplay();
	int a, b;

public:
	Add(int x, int y)
	{
		a = x;
		b = y;
	}

	void sumDisplay()
	{
		cout << "The sum of numbers is " << a + b << endl;
	}
};
