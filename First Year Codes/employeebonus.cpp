#include <iostream>
using namespace std;
int main()
{
    int bonus = 0, yoj, cy, yos;

    cout << ("enter the year of joining: ");
    cin >> yoj;
    cout << ("enter the current year: ");
    cin >> cy;

    yos = cy - yoj;

    if (yos > 3)
        bonus = 2500;

    cout << "your bonus is calculated as: " << bonus;

    return 0;
}