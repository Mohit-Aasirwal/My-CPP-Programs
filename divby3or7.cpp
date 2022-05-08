// take a number from user and check whether it is divisible by 3 or 7
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a; // declaration
    cout << "enter a number to check its divisibility by 3 or 7\n";
    cin >> a; // input
    if (a % 3 == 0 || /*condition*/ a % 7 == 0)
        cout << "yes";
    else
        cout << "no";
    return 0;
}