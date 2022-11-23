#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array: " << endl;
    cin >> n;
    cout << "enter the elements of array: " << endl;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += x[i];
    }
    cout << "the sum of all elements of array are: " << sum;
    return 0;
}