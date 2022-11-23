#include <iostream>
#include <conio.h>
using namespace std;
int main()
{ // declaration
    float gal, cf;
    cout << "input the volume in gallons to convert it to cubic foots.\n";
    cin >> gal;       // taking input
    cf = gal / 7.481; // calculations
    cout << cf;       // printing results
    getch();
    return 0;
}