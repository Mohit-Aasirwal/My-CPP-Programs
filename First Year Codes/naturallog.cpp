#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x, a, b;
    cout << ("enter a number to find sum to first seven terms of its expansion of natural logarithm:\n");
    cin >> (x);

    for (a = 1; a <= 7; a++)
    {
        if (a == 1)
            b = b + pow((x - 1.0) / x, a);
        else
            b = b + 1 / 2 * pow((x - 1.0) / x, a);
    }
    cout << "the result is : " << b;
    return 0;
}