#include <iostream>
#include <math.h>
using namespace std;

int nthFibonacci(int n)
{
    return round(pow((1 + sqrt(5)) / 2, n) / sqrt(5));
}

int main(){
   int n;
    cin>>n;
    cout<<nthFibonacci(n);
    return 0;
}