// program to take a number from user and reverse it...
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num, a; // declaration
    cout << "enter a number to reverse it:";
    cin >> num; // input
    while (num > 0)
    {
        a = num % 10;
        cout << a << " ";
        num = num / 10;
    }
    return 0;
}