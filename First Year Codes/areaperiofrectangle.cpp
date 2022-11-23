#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float l, b, ar, per; // variable declaration
    cout << "input the length and breadth of the reactangle respectively:";
    cin >> l >> b;

    ar = l * b;
    per = 2 * (l + b);

    cout << "area of the rectangle is:\n" << ar;
    cout << "\n perimeter of the rectangle is:\n" << per;
    getch();
    return 0;

}