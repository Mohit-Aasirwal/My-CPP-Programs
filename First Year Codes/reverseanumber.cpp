// program to reverse an entered five digit number
#include <iostream>
using namespace std;
int main()
{
    int n, a, b = 0;
    int revnum = 0;
    cout << ("enter a five digit number:") << endl;
    cin >> (n);
    a = n % 10; /*last digit*/
    n = n / 10;
    b = b + a * 10000;

    a = n % 10; /*fourth digit*/
    n = n / 10;
    b = b + a * 1000;

    a = n % 10; /*third digit*/
    n = n / 10;
    b = b + a * 100;

    a = n % 10; /*second digit*/
    n = n / 10;
    b = b + a * 10;

    a = n % 10;
    b = b + a; /*first digit*/
    revnum = revnum + b;

    cout << ("the number you have entered is reversed as:") << b;

    return 0;
}