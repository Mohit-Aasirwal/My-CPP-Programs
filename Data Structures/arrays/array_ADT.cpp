#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};
void display(struct Array arr[])
{
    for (int i = 0; i < arr->length; i++)
    {
        cout << arr->A[i] << "\t";
    }
    cout << endl;
}
void add(struct Array arr[], int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}
void Insert(struct Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        arr->length++;
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
    }
}
int Delete(struct Array arr[], int index)
{
    if (index >= 0 && index <= arr->length)
    {
        int x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
}

int main()
{
    struct Array arr[] = {{new int[arr->size], 10, 0}};
    add(arr, 1);
    add(arr, 2);
    add(arr, 3);
    add(arr, 4);
    Insert(arr, 2, 5);
    Insert(arr, 5, 2);
    cout << Delete(arr, 3) << endl;
    display(arr);
    return 0;
}