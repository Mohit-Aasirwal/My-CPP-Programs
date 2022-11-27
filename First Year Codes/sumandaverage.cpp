#include <iostream>
#include <conio.h>
using namespace std;
int main()
{ // declaration

    float a, b, sum, avg;
    cout << "enter any two numbers to get their sum and average!";
    // input
    cin >> a;
    cin >> b;

    // operations
    sum = a + b;
    avg = sum / 2;
    cout << "the sum of given numbers are:\n";
    cout << sum;
    cout << " \n the average of given numbers are:\n";
    cout << avg;
    getch();
    return 0;
}