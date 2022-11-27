#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int a1[5] = {1, 2, 3, 4, 5};
    int a2[5] = {1, 2};
    int a3[5] = {0};
    int a4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a1[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a2[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a3[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a4[i] << "\t";
    }

    // other methods of accessing arrays
    cout << a1[1] << endl;
    cout << 1 [a1] << endl;
    cout << *(a1 + 1) << endl;
    return 0;
}