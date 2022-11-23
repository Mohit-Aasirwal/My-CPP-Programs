#include <iostream>
using namespace std;
int main()
{
    int small, arr[100], size, i;
    cout << "\n Enter Array Size (Max 100) : ";
    cin >> size;
    cout << "\n Enter Array Elements : \n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\n Searching for Smallest Element ...\n\n";
    small = arr[0];
    for (i = 0; i < size; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }
    cout << "Smallest Element is : " << small;
    return 0;
}
