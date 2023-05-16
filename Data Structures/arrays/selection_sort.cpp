#include <iostream>
using namespace std;

void selectionsort(int arr[])
{
    int n = 8;
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
            }
        }
        swap(arr[i],arr[k]);
    }
}

int main()
{
    int a[] = {4, 5, 2, 8, 1, 3, 6, 9};
    selectionsort(a);
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << '\t';
    }
}