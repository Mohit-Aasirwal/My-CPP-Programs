// program to print fibonacci sequence by taking user input
//  fibonacci sequence-0,1,1,2,3,5,8,11,15..........
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a = 0, b = 1, c, i = 1, n; // declaration
    cout << "enter the position upto which you want to obtain fibonacci sequence:";
    cin >> n; // input
    cout << a << " " << b << " ";
    while (i <= n - 2)
    {
        // condition to remember
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        i++;
    }
}