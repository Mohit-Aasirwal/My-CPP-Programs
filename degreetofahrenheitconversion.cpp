// program to convert degree celsius to fahrenheit
// program to convert fahrenheit to celsius
#include <iostream>
using namespace std;
int main()
{
    int c, f;
    cout << "enter the value of temperature in degree celsius" << endl;
    cin >> c;
    f = (9 * c) / 5 + 32;
    cout << "temperature in degree fahrenheit is :" << f;
    return 0;
}