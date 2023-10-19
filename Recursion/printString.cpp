#include <iostream>
#include <vector> //have to include the standar library
using namespace std;
void print(int n)
{
    if (n < 1)
    {
        return;
    }
    string ans = "Frank";
    cout << ans << endl;
    print(n - 1);
}
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the value :";
    cin >> n;
    print(n);
    return 0;
}