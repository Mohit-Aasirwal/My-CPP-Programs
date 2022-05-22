// program to print the sum of left diagonal digits...i.e. trace of matrix
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter the number of rows and columns respectively:" << endl;
    cin >> m >> n;
    int x[m][n];
    cout << "enter the elements of the matrix:" << endl;
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
            if (i == j)
            {
                sum += x[i][j];
            }
        }
    }
    cout << "Trace of the matrix is: " << endl;
    cout << sum;
    return 0;
}