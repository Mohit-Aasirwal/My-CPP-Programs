#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << ("enter the number for which you want to print the table\n");
    scanf("%d", &a);
    for (b = 1; b <= 10; b++)
    {
        cout << a << '*' << b << '=' << a * b << endl;
    }
    return 0;
}