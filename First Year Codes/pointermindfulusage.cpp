#include <iostream>
using namespace std;
void areaperi(float, float *, float *);
int main()
{
    float rad;
    float area;
    float peri;
    cout << "enter the value of radius:" << endl;
    cin >> rad;
    areaperi(rad, &area, &peri);
    cout << "area of the circle is :" << area << endl;
    cout << "circumference of the circle is :" << peri;
    return 0;
}
void areaperi(float rad, float *area, float *peri)
{
    *area = 3.14 * rad * rad;
    *peri = 2 * 3.14 * rad;
}