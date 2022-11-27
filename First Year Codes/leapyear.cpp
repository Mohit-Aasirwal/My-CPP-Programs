// in this program we have to check that the given year is leap year or not
#include <iostream>
#include <conio.h>
using namespace std; 
int main()
{
    int yr;
    cout << "enter the year to find it is a leap year or not:\n";
    cin >> yr;
    // condition to remember
    if ((yr % 400 == 0 || yr % 100 != 0) && yr % 4 == 0)
        cout << "entered year is a leap year.";
    else
        cout << "entered year is not a leap year.";

    return 0;
}