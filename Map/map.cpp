#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "babbar";
    m[2] = "love";
    m[3] = "kumar";

    for (auto i : m)
    {
        cout << i.first << endl;
    }
    cout << endl;
    m.insert({6, "bell"});
    for (auto i : m)
    {
        cout << i.first << endl;
    }
    cout << endl;

    cout << "befor erase" << endl;
    m.erase(2);
    for (auto i : m)
    {
        cout << i.first << endl;
    }
    cout << endl;
}