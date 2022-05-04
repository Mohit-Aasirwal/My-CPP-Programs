// program to calculate the sum of digits
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, r, sum = 0; // declaration
    cout << "enter a number:";
    cin >> a; // input
    while (a > 0)
    {
        r = a % 10;
        a = a / 10;
        sum += r;
    }
    cout << "sum of digits entered are:" << sum; // output
    return 0;
}
