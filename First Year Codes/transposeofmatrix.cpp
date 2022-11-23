// this program takes an 2D array and transposes its elements
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter the number of rows and columns respectively:" << endl;
    cin >> m >> n;
    int x[m][n];
    cout<<"enter the elements:"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x[i][j];
        }
    }
    cout << "here's the result:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << x[j][i] << " ";
        }
        cout << "\n";
    }
}