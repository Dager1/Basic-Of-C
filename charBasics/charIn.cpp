#include <iostream>
using namespace std;
void reverse(char name[], int len)
{
    int s = 0;
    int e = len - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter the name:";
    cin >> name; // the thing about cin with respect to character array is that it stops if there is a null, space, tab.
    cout << "The name is " << name << endl;
    int len = getLength(name);
    cout << "The length of the array: " << len << endl;
    reverse(name, len);
    cout << "The reverse of the name: " << name;
}