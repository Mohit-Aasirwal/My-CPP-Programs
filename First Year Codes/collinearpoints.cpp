#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3, y1, y2, y3, ar;
    cout << ("enter the first ordered pair");
    cin >> x1 >> y1;
    cout << ("enter the second ordered pair");
    cin >> x2 >> y2;
    cout << ("enter the third ordered pair");
    cin >> x3 >> y3;

    ar = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    if (ar > 0 && ar < 0)
        cout << ("points are not collinear");
    else if (ar == 0)
        cout << ("points are collinear");

    return 0;
}