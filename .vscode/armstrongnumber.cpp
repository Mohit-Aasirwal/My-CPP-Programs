// program to check whether the entered number is armstrong or not
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, r, c, sc = 0;
    cout << "enter a number:";
    cin >> a;
    while (a > 0)
    {
        r = a % 10;
        a = a / 10;
        c = r * r * r;
        sc += c;
        }
    if (sc == a)
        cout << "entered number is armstrong.";
    else
        cout << "entered number is not armstrong.";
    return 0;
}