#include <iostream>
using namespace std;
int main()
{
    char name[20];
    cout << "Enter the name:";
    cin >> name; // the thing about cin with respect to character array is that it stops if there is a null, space, tab.
    cout << "The name is " << name;
}