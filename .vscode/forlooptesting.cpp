// this program is to test the conditions in for loop
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
    for (int i = 0; i < 10; ++i)
    {
        cout << i << " ";
    }
    cout << "\n";
    for (int i = 0; (i < 10); i++)
    {
        cout << i << " ";
    }
    cout << "\n";
    for (int i = 0, j = 10; i<10, j> 0; i++, j--)
    {
        cout << i << " "
             << "\n"
             << j << " ";
    }
    cout << "\n";
    for (int i = 20, j = 0; i > 0, j <= 20; i--, j++)
    {
        cout << i << " "
             << "\n"
             << j << " ";
    }
}