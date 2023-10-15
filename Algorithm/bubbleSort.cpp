#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
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

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}
