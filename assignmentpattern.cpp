#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << 1 << endl;
    for (x = 1; x <= 3; x++)
    {
        for (y = 1; y <= x; y++)
        {
            for(int i =0;i<=x;i++){
            cout << (1 + x);}
        }
        cout << endl;
    }
    return 0;
}