#include <iostream>
#include <vector> //have to include the standar library
using namespace std;
vector<int> fib(int n, vector<int> &arr)
{
    if (n < 1)
    {
        return arr;
    }
    arr.push_back(0);
    if (n == 1)
    {
        return arr;
    }
    arr.push_back(1);
    for (int i = 2; i < n; i++)
    {

        int next = arr[i - 1] + arr[i - 2];

        arr.push_back(next);
    }
}
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the value :";
    cin >> n;
    arr.clear();
    fib(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}