#include <iostream>
#include <queue>
using namespace std;
int main()
{ // max heap
    priority_queue<int> max;
    // mim heap
    priority_queue<int, vector<int>, greater<int>> mini;

    max.push(1);
    max.push(2);
    max.push(3);
    max.push(4);

    cout << "The max-size: " << max.size() << endl;
    int size = max.size();
    for (int i = 1; i <= size; i++)
    {
        cout << max.top();
        max.pop();
    }
    cout << endl;
}