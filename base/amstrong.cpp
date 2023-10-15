#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int temp = n;
    int ans = 0;

    while (temp > 0)
    {
        int d = temp % 10;
        ans = ans + (d * d * d);
        temp = temp / 10;
    }

    if (n == ans)
    {
        return true;
    }
    else
    {
        return false;
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
