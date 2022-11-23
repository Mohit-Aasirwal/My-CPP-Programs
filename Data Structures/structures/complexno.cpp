#include <iostream>
using namespace std;

struct complex{
    int real;
    int imag;
};
int main(){
    struct complex a = {1,2};
    cout<<"the complex number you entered is: "<<a.real<<"+"<<a.imag<<"i";
}