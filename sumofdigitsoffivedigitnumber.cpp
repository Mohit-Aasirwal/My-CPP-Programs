// program to take a five digit number and calculate the sum of digits.

#include <iostream>
using namespace std;
int main()
{
    int num, a, n;
    int sum = 0;

    cout << ("enter a five digit number: ");

    cin >> num;
    a = num % 10; /*last digit*/
    n = num / 10;
    sum = sum + a;

    a = n % 10; /*fourth digit*/
    n = n / 10;
    sum = sum + a;

    a = n % 10; /*third digit*/
    n = n / 10;
    sum = sum + a;

    a = n % 10; /*second digit*/
    n = n / 10;
    sum = sum + a;

    a = n % 10; /*first digit*/
    sum = sum + a;

    cout << "the sum to the digits of your given number is :" << sum;

    return 0;
}