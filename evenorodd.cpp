// program to take an input integer from the user and state it is odd or even
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a; // declaration
    cout << "enter a number:";
    cin >> a; // input
    if (a % 2 == 0)
        cout << "the given number is even.";
    else
        cout << "the given number is odd.";
    return 0;
}