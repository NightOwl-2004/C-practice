#include <iostream>
#include <cstring>
using namespace std;

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

    virtual void display()
    {
        cout << "Base class's display is called" << endl;
    }
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

/*
! Rules for defining virtual functions
* 1. They cannot be static
* 2. They are accessed by object pointers
* 3. Virtual functions can be a friend of another class
* 4. A function in base class might not be used
*/