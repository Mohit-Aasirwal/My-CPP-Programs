#include <iostream>
#include <conio.h>
using namespace std;
int main()
{  
    //declaration
    float rad, dia, ar, circ;
    cout << "enter the radius of the circle to determine its diameter, area and circumference respectively.\n";
    //taking input
    cin >> rad;
    // formulas
    dia = 2 * rad;
    ar = 3.14 * rad * rad;
    circ = 2 * 3.14 * rad;
    //printing results
    cout << "\n diameter of given circle is: \n" << dia;
    cout << "\n area of given circle is: \n" << ar;
    cout << "\n circumference of given circle is: \n" << circ;
    getch();
    return 0;
}