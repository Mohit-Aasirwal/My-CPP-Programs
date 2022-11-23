// enter numbers and count number of positive,negative integers and number of zeroes.
#include <iostream>
using namespace std;
int main()
{
    int pos, neg, zero, num;
    pos = neg = zero = 0;
    char ans = 'y';
    while (ans == 'Y' || ans == 'y')
    {
        cout << ("enter the numbers till you want\n");
        cin >> num;

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else if (num == 0)
            zero++;
        fflush(stdin);

        cout << ("do you want to continue entering the numbers\n");
        cin >> ans;
    }
    cout << "the number of positive numbers you entered are: " << pos << endl;
    cout << "the number of negative numbers you entered are: " << neg << endl;
    cout << "the number of zeroes you entered are: " << zero << endl;
    return 0;
}