// program to calculate sum of right diagonal of a 3x3 matrix...
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter the number of rows and columns respectively:" << endl;
    cin >> m >> n;
    int x[m][n];
    cout << "enter the elements:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == 2)
                sum += x[i][j];
        }
    }
    cout << "Results are:" << endl;
    cout << sum;
    return 0;
}