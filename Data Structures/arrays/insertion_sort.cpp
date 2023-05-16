#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int x = arr[i];
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}

int main()
{
    int arr[] = {10, 2, 30, 41, 52, 47, 17, 80, 94, 100};
    int arr2[] = {54, 85, 73, 40, 119, 53, 161, 97};
    insertion_sort(arr,10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
    insertion_sort(arr2,8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr2[i] << '\t';
    }
}