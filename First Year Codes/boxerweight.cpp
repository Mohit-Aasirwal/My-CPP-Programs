#include <iostream>
using namespace std;
int main()
{
    int wt;
    cout << ("enter the weight of boxer in pounds to know his class: ");
    cin >> (wt);

    if (wt < 115)
        cout << ("the boxer's class is 'flyweight'");

    else if (wt >= 115 && wt <= 121)
        cout << ("the boxer's class is 'bantamweight'");

    else if (wt >= 122 && wt <= 153)
        cout << ("the boxer's class is 'featherweight'");

    else if (wt >= 154 && wt <= 189)
        cout << ("the boxer's class is 'middleweight'");

    else if (wt >= 190)
        cout << ("the boxer's class is 'heavyweight'");

    return 0;
}