#include <iostream>
using namespace std;
// program to find the gcd of two numbers using euclideans algoritm
int gcd(int n, int m)
{
    while (n > 0 && m > 0)
    {
        if (n > m)
        {
            n = n % m;
        }
        else
            m = m % n;
    }
    if (n == 0)
    {
        return m;
    }
    else
        return n;
}

int main()
{
    int n, m;
    cout << "Enter the first number: ";
    cin >> n;
    cout << "Enter the secound number: ";
    cin >> m;

    int ans = gcd(n, m);
    cout << "The gcd of " << n << "," << m << " is: " << ans;
    return 0;
}
