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

    // it itterates by displaying the maximum value
    cout << "The max-size: " << max.size() << endl;
    int size = max.size();
    for (int i = 1; i <= size; i++)
    {
        cout << max.top();
        max.pop();
    }
    cout << endl;

    // it itterates by displaing the minimum valus
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    cout << "The max-size: " << mini.size() << endl;
    int sizee = mini.size();
    for (int i = 1; i <= sizee; i++)
    {
        cout << mini.top();
        mini.pop();
    }
    cout << endl;

    // using the empty method to to check if emprty
    cout << "Is the queeu emprty:" << (mini.empty() ? "Yes" : "No");
}