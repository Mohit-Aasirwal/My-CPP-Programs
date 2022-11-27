#include <iostream>
using namespace std;
int main()
{
    int l, b, ar, per;
    cout << ("enter the length of the rectangle:") << endl;
    cin >> (l);
    cout << ("enter the breadth of the rectangle:") << endl;
    cin >> (b);

    ar = l * b;
    per = 2 * (l + b);

    if (ar > per)
        cout << ("area of rectangle is greater than perimeter of it");
    else
        cout << ("area of rectangle is less then perimeter of it");

    return 0;
}