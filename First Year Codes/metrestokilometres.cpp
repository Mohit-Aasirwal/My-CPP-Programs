#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float m, km; // declaration
    cout << "enter value in metres to convert it to kilometres: \n";
    cin >> m;      // taking input
    km = m / 1000; // formulae
    cout << "kilometres: \n"<< km; // output
    getch();
    return 0;
}