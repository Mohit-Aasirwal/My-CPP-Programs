// binary search another attempt....
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array:" << endl;
    cin >> n;
    int x[n];
    cout << "enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int search;
    cout << "enter the number you want to search:" << endl;
    cin >> search;

    int f, m, e;
    f = x[0];
    e = x[n - 1];
    while (f < e)
    {
        m = (f + e) / 2;
        if (m == search)
        {
            cout << "element found!";
            break;
        }
        else if (m > search)
        {
            f = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    return 0;
}