#include <iostream>
#include <vector> //have to include the standar library
using namespace std;
int print(int n, int sum)
{
    if (n < 1)
    {
        return sum;
    }
    sum += n;
    print(n - 1, sum);
}
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the value :";
    cin >> n;
    int ans = print(n, 0);
    cout << ans;
    return 0;
}