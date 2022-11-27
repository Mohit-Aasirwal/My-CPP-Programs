//buggy

#include <iostream>
using namespace std;
int binarysearch(int x[], int n, int search)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (search == x[m])
        {
            return true;
        }
        else if (search > x[m])
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    return 0;
}
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
    cout << "enter the element you want to search in array:" << endl;
    int search;
    cin >> search;

    binarysearch(x, n, search);
    if (binarysearch)
    {
        cout << "element found";
    }
    else
    {
        cout << "element not found";
    }
}