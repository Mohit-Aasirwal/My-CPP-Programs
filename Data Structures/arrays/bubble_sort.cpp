#include <iostream>
using namespace std;

void bubbleSort(int arr[])
{
    int n = 8;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j + 1], arr[j]);
}

int main()
{
    int a[] = {54, 85, 73, 40, 10, 53, 52, 97};
    bubbleSort(a);
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << '\t';
    }
} 