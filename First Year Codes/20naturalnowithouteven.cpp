// program to print 20 natural numbers without even numbers
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a;                    // declaration
    for (a = 0; a <= 20; a++) // loop
        if (a % 2 != 0)       // conditional statement
        {
            cout << a;
            cout << "\n"; // for newline
        }
    return 0;
}