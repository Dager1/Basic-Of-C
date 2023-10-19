#include <iostream>
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
    int n;
    cout << "Enter the value :";
    cin >> n;
    int ans = print(n, 0);
    cout << ans;
    return 0;
}