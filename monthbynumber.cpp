#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter the month: ";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "This month is January";
        break;

    case 2:
        cout << "This month is February";
        break;

    case 3:
        cout << "This month is march";
        break;

    case 4:
        cout << "This month is april";
        break;

    case 5:
        cout << "This month is May";
        break;

    case 6:
        cout << "This month is June";
        break;

    default:
        cout << "your month is not available in first half months";
        break;
    }

    return 0;
}