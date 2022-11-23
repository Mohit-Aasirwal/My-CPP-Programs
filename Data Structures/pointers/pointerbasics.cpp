#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    int *q;
    q = (int *)malloc(5 * sizeof(int));
    q = new int[5];
    cout << q;
}