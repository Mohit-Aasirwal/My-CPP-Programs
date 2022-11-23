#include <iostream>
#include <conio.h>
using namespace std;
int main()
{      //declaration
    float temp, faren;
    cout << "enter the temperature in degree C\n"; // centigrade sign by alt+0176
    cin >> temp;
    //formula
    faren = (temp * 9 / 5) + 32;
    //result
    cout << "\n temperature in farenheit is:\n"<< faren;
    getch();
    return 0;
}