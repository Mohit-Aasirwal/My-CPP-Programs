// program to print factorial of a given input integer
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, fact = 1; // declaration
    cout << "enter the number for which you want to find the factorial:";
    cin >> i;     // input
    while (i > 0) // loop and condition
    {             // operations
        fact *= i;
        i--;
    }
    cout << "factorial of given number is:" << fact; // output
    return 0;
}