#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> d;
    d.push('t');
    d.push('a');
    d.push('c');

    // cant use the classic itterator
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    // push and pop are the two common operation
    cout << d.top() << endl;
    d.pop();
    cout << d.top() << endl;

    cout << "is empty or not " << d.empty();
}