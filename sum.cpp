#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c || b + c == a||a+c==b)
        {
            cout << "yes"<<endl;
        }
        else
            cout << "no"<<endl;
    }
    return 0;
}