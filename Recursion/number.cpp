#include <iostream>
#include <vector> //have to include the standar library
using namespace std;
vector<int> fib(int n, vector<int> &arr, int i)
{
    if (n < 1)
    {
        return arr;
    }
    arr.push_back(i);
    fib(n - 1, arr, i + 1);
}
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the value :";
    cin >> n;
    fib(n, arr, 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}