#include <iostream>
using namespace std;
void function(int n)
{
    if (n > 0)
    {
        cout << n << "\t";
        function(n - 1);
    }
}
void function2(int n){
    if (n > 0)
    {
        function2(n - 1);
        cout << n << "\t";
    }
}
int main()
{
    int x = 3;
    function(x);
    cout<<endl;
    function2(x);
    return 0;
}