// salary increment
// program to take salary input by user and check if salary>10000 then increment that salary by 10%
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int sal, b; // declaration
    cout << "enter the salary of the employee:";
    cin >> sal; // input
    if (sal > 10000)
    {
        sal = sal + sal * 0.1;
        cout << "salary of the employee is:" << sal;
    }
    else
        cout << "the salary is too low for any increment";
    return 0;
}