#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("59_sample_output.txt");
    outfile << "This is line number 1" << endl
            << "This is line number 2" << endl
            << "This is line number 3" << endl
            << "This is line number 4" << endl
            << "This is line number 5" << endl;
    outfile.close();
    //! It is considered good practice to close the file after it has been used

    ifstream infile;
    // infile.open("59_sample_output.txt");
    infile.open("59_sample_input.txt");
    string st;

    // ? eof() is end of file
    while (infile.eof() == 0)
    {
        getline(infile, st);
        cout << st << endl;
    }
    infile.close();

    return 0;
}