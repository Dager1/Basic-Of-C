#include <iostream>
using namespace std;
int lastOccuranc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[5] = {2, 3, 5, 5, 5};
    cout << lastOccuranc(arr, 5, 5);
}