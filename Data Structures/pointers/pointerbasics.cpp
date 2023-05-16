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
    cout << q << endl;
    char c = 'm';
    char *r;
    r = &c;
    cout << c << endl
         << *r << endl;
    float f = 10.5;
    float *s;
    s = &f;
    cout << f << endl
         << *s << endl;
    double d = 10.5;
    double *t;
    t = &d;
    cout << d << endl
         << *t;
    return 0;
}