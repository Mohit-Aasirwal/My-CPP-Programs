// program to print the larger integer however if both numbers leave same remainder on dividing by 7 then printing smaller integer and if both integers are same then print 0
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b; // declaration
    cout << "enter two numbers:\n";
    cin >> a >> b; // input
    if (a > b)
        cout << "greater number is:" << a;
    else if (a < b)
        cout << "greater number is:" << b;
    else
        cout << "0";
    return 0;
}