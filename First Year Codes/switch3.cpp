// switch for area of shapes.
#include <iostream>
using namespace std;
int main()
{
    int a, b, choice;
    float ar;
    cout << "Area Menu: " << endl;
    cout << "1-Area of triangle\n2-Area of circle\n3-Area of square\n4-Area of rectangle" << endl;
    cout << "Select your choice" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "enter the base and height of triangle respectively: " << endl;
        cin >> a >> b;
        ar = 0.5 * a * b;
        cout << "area of triangle is: " << ar;
        break;
    case 2:
        cout << "enter the radius of circle: " << endl;
        cin >> a;
        ar = 3.14 * a * a;
        cout << "area of circle is: " << ar;
        break;
    case 3:
        cout << "enter the side of square: " << endl;
        cin >> a;
        ar = a * a;
        cout << "area of square is: " << ar;
        break;
    case 4:
        cout << "enter the length and breadth of rectangle: " << endl;
        cin >> a >> b;
        ar = a * b;
        cout << "area of rectangle is: " << ar;
        break;
    default:
        cout << "enter the correct choice!";
    }
    return 0;
}