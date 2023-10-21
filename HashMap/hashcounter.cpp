#include <iostream>
using namespace std;
int hhash[1000001];
int main()
{
    cout << "Enter the array lenght";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the array values :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }

    // preComputing

    for (int i = 0; i < n; i++)
    {
        hhash[arr[i]] += 1;
    }
    // quries
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << hhash[number] << endl;
    }
}