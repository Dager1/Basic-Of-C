#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Mark");
    q.push("Anthony");
    q.push("Will");
    q.push("Farrel");

    cout << "The first element into the queue" << endl;
    cout << q.front() << endl;
    q.pop();
    cout << "After pop the queue element" << endl;
    cout << q.front() << endl;
}