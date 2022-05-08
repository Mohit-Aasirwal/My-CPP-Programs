// program to print the series 2,4,3,6,5.........
#include <iostream>
using namespace std;
int main()
{
    int a = 2, b; // declaration
    cout << "enter the position upto which you want to print the series:";
    cin >> b;         // input
    cout << a << " "; // printing 2
    while (a < b)
    {
        cout << 2 * a;
        cout << " "; // somewhat blasted code but nothing else works
        cout << 2 * a - 1;
        cout << " ";
        a++;
    }
    return 0;
}