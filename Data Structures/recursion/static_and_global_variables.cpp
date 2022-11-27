#include <iostream>
using namespace std;

int func(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return func(n - 1) + x;
    }
    return 0;
}

int x = 0;
int func2(int n)
{
    if (n > 0)
    {
        x++;
        return func2(n - 1) + x;
    }
    return 0;
}
int main()
{
    int a = 5;
    int r = func(a);
    cout << r << endl;
    int s = func2(a);
    cout << s << endl;
}