#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(3);
    v.push_back(9);
    v.push_back(8);
    v.push_back(13);
    v.push_back(7);
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    auto lb = lower_bound(v.begin(), v.end(), 9);
    auto ub = upper_bound(v.begin(), v.end(), 9);

    cout << "lower bound: " << *lb << endl;
    cout << "upper bound: " << *ub << endl;
}