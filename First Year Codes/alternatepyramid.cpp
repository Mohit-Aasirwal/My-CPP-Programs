/*alternate pyramid*/
#include <iostream>
using namespace std;
int main()
{ /*declaration*/
    int a, b, c;
    /*loop for rows*/
    for (a = 1; a <= 5; a++)
    { /*third variable for alternate switching*/
        c = 1;
        /*loop for columns*/
        for (b = 1; b <= 9; b++)
        {
            if (b >= 6 - a && b <= 4 + a && c)
            {
                cout << ("*");
                c = 0;
            }
            else
            {
                cout << (" ");
                c = 1;
            }
        }
        /*statement for newline*/
        cout << ("\n");
    }
    return 0;
}