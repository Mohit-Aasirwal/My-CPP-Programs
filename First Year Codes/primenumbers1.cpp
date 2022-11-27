#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (a = 2; a < i; a++)
        {
            if (i % a != 0)
                cout << i << endl;
        }
    }
}