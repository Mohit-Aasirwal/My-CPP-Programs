#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
int main(){
    struct Rectangle r = {12, 15};
    cout<<r.length<<endl<<r.breadth;
}
