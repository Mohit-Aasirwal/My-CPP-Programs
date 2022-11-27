#include <iostream>
using namespace std;

int main()
{
    int *p = new int{5};
    int *q = new int[10];
    for (int i = 0; i < 5; i++)
    {
        p[i] = i + 2;
    }
    for (int i = 0; i < 5; i++)
    {
        i[q] = i[p];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << *(q + i) << "\t";
    }
    delete[] p;
    p = q;
    q = nullptr;
}