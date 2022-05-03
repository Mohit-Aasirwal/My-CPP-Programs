// program to print the series-0,3,8,15...
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a = 1, b = 1, n; // declaration
    cout << "enter the position upto which you want to print the series:";
    cin >> n;      // input
    while (b <= n) // loop and condition
    {              // operations
        cout << a * a - 1 << " ";
        a++;
        b++;
    }
    return 0;
}