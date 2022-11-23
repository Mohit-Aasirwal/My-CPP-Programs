// program to calculate area of triangle by heron's formula
#include <iostream> //header file
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, ar, s; // variable declaration
    /*getting input by user*/
    cout << ("please input first side") << endl;
    cin >> a;
    cout << ("please input second side") << endl;
    cin >> b;
    cout << ("please input third side") << endl;
    cin >> c;

    /*formulae*/
    s = (a + b + c) / 2;
    ar = sqrt(s * (s - a) * (s - b) * (s - c));

    /*printing output*/
    cout << "the area of the above triangle is:" << ar;

    return 0;
}