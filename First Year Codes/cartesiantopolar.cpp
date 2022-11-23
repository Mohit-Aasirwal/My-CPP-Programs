// program to convert cartesian coordinates to polar coordinates
#include <iostream>
#include <math.h>
using namespace std;
int main()
{ /*taking input*/
    float x, y, r, theta;
    cout << ("enter the x coordinate ");
    cin >> (x);
    cout << ("enter the y coordinate ");
    cin >> (y);
    /*formulae*/
    r = sqrt(x * x + y * y);
    theta = atan2(y, x);
    theta = theta * 180 / 3.14;
    /*taking output*/
    cout << ("the coordinates you entered can be represented in polar format in following order:") << endl;
    cout << "radius: " << r << endl;
    cout << "argument: " << theta << endl;

    return 0;
}