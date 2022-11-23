#include <iostream>
using namespace std;
int main()
{
    // program to print prime numbers between 1 to 300
    int a = 2, b;
    while (a <= 300)
    {
        b = 2;

        while (b < a)
        {

            if (a % b == 0)
                break;
            else
                b++;
        }
        if (b == a)
            cout << (a) << "\t";
        ;
        a++;
    }
    return 0;
}