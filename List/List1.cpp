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

    l.erase(l.begin());

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}
