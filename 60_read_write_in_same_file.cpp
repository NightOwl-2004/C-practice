#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream output("59_sample_output.txt");
    string name;
    cout << "Enter your name: ";
    cin >> name;

    output << "My name is " << name;
    output.close();

    ifstream input("59_sample_output.txt");
    string content;
    // input >> content;
    getline(input, content);
    cout << "The content of this file is: " << endl
         << content;
    input.close();

    return 0;
}