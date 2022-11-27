// program to print the series-2,9,28,65...........
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a = 1, b = 1, n; // declaration
    cout << "enter the position upto which you want to print the series:";
    cin >> n; // input
    while (b <= n)
    {
        cout << a * a * a << " ";
        a++;
        b++;
    }
    return 0;
}