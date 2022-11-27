#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// pointer to a structure
int main()
{
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;

    // r.length = 15;
    cout << (*p).length << endl;
    cout << p->length << endl;
    
    //dynamic pointer to a structure
    struct Rectangle *k;
    cout<<(struct Rectangle *)malloc(sizeof(struct Rectangle));

}