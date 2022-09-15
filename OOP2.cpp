#include <iostream>
using namespace std;
class Circle
{
    int a, b, ar, per;

public:
    void get_area(int);
    void get_per(int);
    void display(void);
};
void Circle ::get_area(int a)
{
    ar = 3.14 * a * a;
}
void Circle ::get_per(int a)
{
    per = 2 * 3.14 * a;
}
void Circle ::display(void)
{
    cout << "area of given circle is: " << ar << " and perimeter of given circle is: " << per;
}
int main()
{
    Circle c;
    c.get_area(5);
    c.get_per(5);
    c.display();

    return 0;
}