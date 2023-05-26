#include <iostream>
#include <cstring>
using namespace std;

//! Abstract class is a class which contains atleast one pure virtual function
//? It is not used to create objects but it is used to derive classes further

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual void display() = 0; // ? Do nothing function --> Pure virtual function
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vL) : CWH(s, r)
    {
        videoLength = vL;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Lenght of this video is " << videoLength << " minutes" << endl;
        cout << endl;
    }
};

class CWHText : public CWH
{
    int textLength;

public:
    CWHText(string s, float r, int tL) : CWH(s, r)
    {
        textLength = tL;
    }

    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "Lenght of this tutorial is " << textLength << " words" << endl;
        cout << endl;
    }
};

int main()
{
    string title;
    float rating, vLeng;
    int words;

    //* For videos
    title = "JavaScript tutorial";
    rating = 4.5;
    vLeng = 13.55;
    CWHVideo jsVideo(title, rating, vLeng);

    //* For text
    title = "JavaScript tutorial text";
    rating = 4.5;
    words = 800;
    CWHText jsText(title, rating, words);

    CWH *tuts[2];

    tuts[0] = &jsVideo;
    tuts[1] = &jsText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}