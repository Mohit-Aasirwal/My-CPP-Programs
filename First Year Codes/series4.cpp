// program to print series-1,4,9,16....
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a = 1, b = 1, n; // declaration
    cout << "enter the position upto you wish to print the series:";
    cin >> n;      // input
    while (b <= n) // condition
    {              // operations
        cout << a * a << " ";
        a++;
        b++;
    }
    return 0;
}