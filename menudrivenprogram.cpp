// program to demonstrate switch case by a menu driven program.
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int fact, pr, i, odd, even, no, choice;

    while (1)

    {
        cout << ("\nchoose which program you want to execute:\n");
        cout << ("1-factorial for a given number\n");
        cout << ("2-prime or not\n");
        cout << ("3-given number is odd or even\n");
        cout << ("4-exit without executing\n");

        cout << ("enter your choice\n");
        cin >> (choice);

        switch (choice)
        {
        case 1:
            cout << ("enter the number:\n");
            cin >> (no);
            fact = 1;
            for (i = 1; i <= no; i++)
                fact *= i;
            cout << "the factorial for the given number is: " << fact;
            break;
        case 2:
            cout << ("enter the number to figure out it is prime or not:\n");
            cin >> (no);
            for (i = 2; i < no; i++)
            {
                if (no % i == 0)
                {
                    cout << ("the number is not prime\n");
                    break;
                }
            }
            if (i == no)
                cout << ("the number is a prime\n");
            break;
        case 3:
            cout << ("enter a number to determine it is odd or even:\n");
            cin >> (no);
            if (no % 2 == 0)
                cout << ("the number entered is even\n");
            else
                cout << ("the number entered is odd\n");
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}