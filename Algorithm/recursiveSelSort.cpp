#include <iostream>
using namespace std;

void recursiveSelSort(int arr[], int n, int i = 0)
{
    if (i == n - 1)
        return;

    int min = i;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[min])
        {
            min = j;
        }
    }

    swap(arr[i], arr[min]);
    recursiveSelSort(arr, n, i + 1);
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the numbers into the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    recursiveSelSort(arr, n, 0);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}
