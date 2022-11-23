// program to calculate gross salary of employee
#include <iostream>
using namespace std;
int main()
{
    float bs, da, hra, gs;
    cout << ("enter your basic salary");
    cin >> (bs);

    if (bs < 1500)
    {
        da = bs * 90 / 100;
        hra = bs * 10 / 100;
    }
    else
    {
        da = bs * 98 / 100;
        hra = 500;
    }

    gs = bs + da + hra;

    cout << "gross salary of the employee is :" << gs;
    return 0;
}