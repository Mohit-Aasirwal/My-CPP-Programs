#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int a[4][4] = {{1, 2, 3,4}, {4, 5, 6,7}, {7, 8, 9,10}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if((i==0||i==n-1)||(j==0||j==n-1))
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
}