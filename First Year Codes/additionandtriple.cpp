// program to add two integers and if both integers are same then tripling the result
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{ // declaration
    int a, b, sum;
    cout << "enter two number to add them:\n";
    cin >> a >> b; // user input
    sum = a + b;   // calculations
    if (a == b)
        sum *= 3;
    cout << sum; // output
    return 0;
}