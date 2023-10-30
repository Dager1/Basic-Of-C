#include <iostream>
using namespace std;
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int n;
    cout << "Enter the size of the arrray :" << endl;
    cin >> n;
    cout << "Enter the arrray  elements:" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, n);
    cout << "Enter the arrray  elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}