// program to take a number n from user and print its absolute difference with 51 and if number is greater than 51 than tripling the result
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, dif; // declaration
    cout << "enter a number to get its absolute difference with 51\n";
    cin >> a;     // input
    dif = 51 - a; // formulae
    if (dif < 0)
        cout << 3 * (a - 51);
    else
        cout << 51 - a;
    return 0;
}