/*program to demonstrate the trigonometric ratios for any given angle by math.h file*/
#include <iostream> //header files
#include <math.h>
using namespace std;
int main()
{
    float a, s, c, t, cosec, sec, cot; // variable declaration
    cout << "input an angle in degree through the keyboard:" << endl;
    cin >> (a); // angle input
    // operations
    s = sin(a);
    cout << "sine for given angle is:" << s << endl;
    c = cos(a);
    cout << "cosine for given angle is: " << c << endl;
    t = tan(a);
    cout << "tangent for given angle is: " << t << endl;
    cosec = 1 / sin(a);
    cout << "cosecant for given angle is: " << cosec << endl;
    sec = 1 / cos(a);
    cout << "secant for given angle is: " << sec << endl;
    cot = 1 / tan(a);
    cout << "cotangent for given angle is: " << cot << endl;

    return 0;
}