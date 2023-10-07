#include <iostream>
#include <List>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(9);
    l.push_front(3);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    // it delets what ever itterator it pointing to
    l.erase(l.begin());

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    // a an exiting list
    list<int> n(l);
    cout << "The new list n ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}
