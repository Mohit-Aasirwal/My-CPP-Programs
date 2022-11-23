#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;           //changes in r reflect in a as r is reference variable and not a normal variable which on holds the data of other variable.
    cout << r << endl << a;
}