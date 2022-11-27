/*program to determine wind chill factor of an area by taking temp and velocity of wind as parameters*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float t, v, wcf;
    cout << "enter the value of temperature:" << endl;
    cin >> t;
    cout << "enter the velocity of wind:" << endl;
    cin >> v;
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    cout << "wind chill factor is:" << wcf;
    return 0;
}