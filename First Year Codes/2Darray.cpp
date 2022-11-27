// program for take a matrix for user and print it.
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter the number of rows and columns respectively:" << endl;
    cin >> m >> n;
    cout << "enter the elements of the array:" << endl;
    int x[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x[i][j];
        }
    }
    cout << "Here's the output:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}