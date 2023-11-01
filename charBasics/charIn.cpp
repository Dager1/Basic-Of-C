#include <iostream>
using namespace std;
char toLowerCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
    else
    {
        return ch;
    }
}

bool palidrom(char name[], int len)
{
    int s = 0;
    int e = len - 1;
    while (s < e)
    {
        if (name[s] != name[e])
        {
            return 0;
        }
        else
        {

            s++;
            e--;
        }
    }
    return 1;
}
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
    cout << "The reverse of the name: " << name << endl;
    cout << "It is a palandron or not: " << palidrom(name, len);
    cout << "char is " << toLowerCase('B');
}