#include <iostream>
using namespace std;
bool linear_search(int arr[], int size, int key)
{
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int aba[5] = {
        67,
        4,
        5,
        6,
        55},
        k;
    cin >> k;
    if (linear_search(aba, 5, k))
    {
        cout << "It is present";
    }
    else
    {
        cout << "It is not present";
    }
}