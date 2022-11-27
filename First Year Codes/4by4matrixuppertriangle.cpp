#include <iostream>
using namespace std;
int main()
{
    int x[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> x[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j < 4 - i)
                cout << x[i][j] << endl;
        }
    }

    return 0;
}