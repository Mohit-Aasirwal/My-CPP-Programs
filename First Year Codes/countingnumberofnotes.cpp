// program to convert an amount into least amount of notes required.
#include <iostream>
using namespace std;
int main()
{
    int amt, one, two, five, ten, fifty, hundred, tn = 0;
    cout << ("enter the amount you want to convert into least no of notes:") << endl;
    cin >> amt;

    hundred = amt / 100;
    amt = amt % 100;
    fifty = amt / 50;
    amt = amt % 50;
    ten = amt / 10;
    amt = amt % 10;
    five = amt / 5;
    amt = amt % 5;
    two = amt / 2;
    amt = amt % 2;
    one = one / 1;
    amt = amt % 1;

    tn = tn + hundred + fifty + ten + five + two + one;

    cout << "the total number of notes are: " << tn;
    return 0;
}