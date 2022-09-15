//program to find the point lies inside a circle or outside a circle
#include <iostream>
using namespace std;
int main()
{
    int r, x, y;
    int dis, d;
    cout << ("enter the radius of circle and coordinates of the point")<<endl;
    cin >> r >> x >> y;

    dis = x * x + y * y;
    d = r * r;

    if (dis == d)
        cout << ("the point you entered lies on circle");
    if (dis != d)
    {
        if (dis > d)
            cout << ("point lies outside the circle");
        else
            cout << ("point lies inside the circle");
    }

    return 0;
}