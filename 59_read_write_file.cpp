#include <iostream>
#include <fstream>

//! The useful classes for working with files in C++ are:
/*
 * 1. fstreambase --> It is the base class
 * 2. ifstream  --> dervied from fstreambase
 * 3. ofstream  --> dervied from fstreambase
 */

//! In order to work with files in C++, primarily there are 2 ways to open a file:
/*
 * 1.Using the constructor
 * 2.Using the member function open() of the class
 *
 */

using namespace std;

int main()
{
    string str = "Hello, world!";
    string st2;
    //? Opening a file usign the constructor and writing to it
    ofstream out("59_sample_output.txt"); // Write operation
    out << str;

    //? Opening a file usign the constructor and reading it
    ifstream in("59_sample_input.txt"); // Read operation
    //! in >> st2; If we do this then newlines and spaces are not taken into account
    getline(in, st2); // This function will read an entire line from the input file

    cout << st2 << endl;

    return 0;
}