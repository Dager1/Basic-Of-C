#include <iostream>
#include <set>
using namespace std;
int main()
{
    // set is used when want to store unique valuse in it
    // set return valuse in sorted order
    // unoder set are slow cause it return in unsorted order
    // does not allow dubplication of valuse
    // Big O(logn)

    set<int> se;
    se.insert(31);
    se.insert(59);
    se.insert(56);
    se.insert(14);
    se.insert(14);
    se.insert(56);

    for (auto i : se)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = se.begin();
    advance(it, 1);
    se.erase(it);

    for (auto i : se)
    {
        cout << i << endl;
    }
    cout << endl;

    // count method informs us if an element is present or not
    cout << "Using count " << ((se.count(59)) ? "Yes" : "No");

    // using find method to find the postion of the valuse
    set<int>::iterator itrr = se.find(56);
    // cout << "The postion of 56: " << itrr;
}