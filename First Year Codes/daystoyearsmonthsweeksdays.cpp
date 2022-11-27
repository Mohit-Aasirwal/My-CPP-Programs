/*in this program user is going to give values in days and we have to convert it to no of years , months , weeks and day passed from starting*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int days = 0, years, months, weeks;
    cout << "enter the number of days:\n"
         << days;
    cin >> days;
    years = days / 365;
    months = days / 30;
    weeks = days / 7;
    cout << "number of years in the given days:\n"
         << years;
    cout << "\nnumber of months in the given days:\n"
         << months;
    cout << "\nnumber of weeks in the given days:\n"
         << weeks;

    return 0;
}