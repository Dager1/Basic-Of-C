#include <iostream>
#include <cmath> // Include cmath for pow()
using namespace std;

bool isArmstrong(int n)
{
    int temp = n;
    int ans = 0;
    string s = to_string(n);
    int size = s.size();
    while (temp > 0)
    {
        int d = temp % 10;
        ans = ans + pow(d, size);
        temp = temp / 10;
    }

    if (n == ans)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    string result = isArmstrong(n) ? " is an Armstrong number." : " is not an Armstrong number.";
    cout << n << result << endl;

    return 0;
}
