#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    int *p;
    char *q;
    float *r;
    double *s;
    struct Rectangle *t;

    cout << sizeof(p)<<endl;

    cout << sizeof(q)<<endl;

    cout << sizeof(r)<<endl;

    cout << sizeof(s)<<endl;

    cout << sizeof(t);
}