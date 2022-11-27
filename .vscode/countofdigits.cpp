// program to count the number of digits entered
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, r, count = 0; // declaration
    cout << "enter a number:";
    cin >> a; // input
    while (a > 0)
    {
        r = a % 10;
        a = a / 10;
        count++;
    }
    cout << "number of digits entered are:" << count; // output
    return 0;
}