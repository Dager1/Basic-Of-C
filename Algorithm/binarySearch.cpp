#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int bin[6] = {4, 15, 34, 56, 67, 78};
    int ans = binarySearch(bin, 6, 67);
    cout << ans;
}