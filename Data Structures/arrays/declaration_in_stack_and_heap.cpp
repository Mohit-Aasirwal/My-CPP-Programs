#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << a[i] << "\t";
    }
    cout << endl;
    int *p;
    p = new int[5];
    int *q;
    q = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        /* code */
        q[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << q[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        p[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << "\t";
    }
    cout << endl;
    delete[] p;
    return 0;
}