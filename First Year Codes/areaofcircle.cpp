// program to print area of circle
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float r, ar;
    cout << "enter the radius of circle to get its area: \n";
    cin >> r;

    ar = 22 / (float)7 * r * r;
    cout << "\n area of circle is:\n"<< ar;
    return 0;
}