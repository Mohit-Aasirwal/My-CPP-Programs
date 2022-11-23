// this program sorts the array in ascending order by algorithm of bubble sorting...
//time complexity is O(n^2)...
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

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    cout << "sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
}