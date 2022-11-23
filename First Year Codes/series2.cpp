// program to print odd number series i.e.1,3,5,7.........
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a = 0, b; // declaration
    cout << "enter the position upto which you want to print the series:";
    cin >> b; // input
    while (a < b /* condition */)
    {
        cout << a * 2 + 1 << " ";
        a++; /* code */
    }
    return 0;
}