#include <iostream>
#include <map>
#include <string>
using namespace std;

//* Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Aniket"] = 78;
    marksMap["Gireeja"] = 98;
    marksMap["Suraj"] = 82;
    marksMap["Hrushikesh"] = 88;

    marksMap.insert({{"Om", 84}, {"Harry", 99}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); ++iter)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout << "The size of the marksMap is " << marksMap.size() << endl;
    cout << "Max size of the map is " << marksMap.max_size() << endl;

    return 0;
}