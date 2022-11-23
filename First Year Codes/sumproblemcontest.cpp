#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    for (int i = 0; i < 5; i++)
    {
        cin >> a >> b >> c;

        if (a + b == c)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
    return 0;
}