// program to take input in latitudes and longitudes and convert into nautical miles
#include <iostream> //header files
#include <math.h>
using namespace std;
int main()
{
    float lat1, lat2, lon1, lon2, dis; // variables
    cout << ("enter the values of latitudes") << endl;
    cin >> lat1 >> lat2; // input
    cout << ("enter the values of longitudes") << endl;
    cin >> lon1 >> lon2;
    // calculations
    lat1 = lat1 * 3.14 / 180;
    lat2 = lat2 * 3.14 / 180;
    lon1 = lon1 * 3.14 / 180;
    lon2 = lon2 * 3.14 / 180;
    dis = 3963 * acos(sin(lon1) * sin(lon2) + cos(lon1) * cos(lon2) * cos(lat2 - lat1));
    // output
    cout << "distance between these two points in nautical miles is " << dis;
    return 0;
}