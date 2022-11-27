/*number pattern 1*/
#include <iostream>
using namespace std;
void style();
int main()
{
    int a, b, c;
    for (a = 1; a <= 4; a++)
    {
        c = 1; /*specified to print numbers*/
        for (b = 1; b <= 7; b++)
        {
            if (b >= 5 - a && b <= 3 + a)
            {
                cout << (c); /*printing numbers*/
                b < 4 ? c++ : c--;
            } /*conditional operators for incrementing and decrementing values*/
            else
                cout << (" ");
        }
        cout << ("\n");
    }
    style();
    return 0;
}
void style()
{
    cout << ("the program is successfully compiled and runned.");
}