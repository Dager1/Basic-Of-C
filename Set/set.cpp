#include <iostream>
#include <set>
using namespace std;
int main()
{
    // set is used when want to store unique valuse in it
    // set return valuse in sorted order
    // unoder set are slow cause it return in unsorted order
    // does not allow dubplication of valuse

    set<int> set;
    set.insert(31);
    set.insert(59);
    set.insert(56);
    set.insert(14);
    set.insert(14);
    set.insert(56);

    for (auto i : set)
    {
        cout << i << endl;
    }
}