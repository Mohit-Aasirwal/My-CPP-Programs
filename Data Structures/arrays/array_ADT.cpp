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
int search(struct Array arr[], int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int improvedLS(struct Array arr[], int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(arr->A[i], arr->A[i - 1]);
            return i - 1;
        }
    }
    return -1;
}
int improvisedLS(struct Array arr[], int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(arr->A[i], arr->A[0]);
            return 0;
        }
    }
    return -1;
}
int binarySearch(struct Array arr[], int key)
{
    int s = 0;
    int e = arr->length;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr->A[mid] == key)
        {
            return mid;
        }
        else if (arr->A[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr->A[mid] < key)
        {
            s = mid + 1;
        }
    }
    return -1;
}
int get(struct Array arr[], int index)
{
    if (index >= 0 && index < arr->length)
    {
        return arr->A[index];
    }
}
void set(struct Array arr[], int index, int data)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = data;
    }
}
int max(struct Array arr[])
{
    int max = 0;
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] > max)
        {
            max = arr->A[i];
        }
    }
    return max;
}
int min(struct Array arr[])
{
    int min = arr->A[0];
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] < min)
            min = arr->A[i];
    }
    return min;
}
int sum(struct Array arr[])
{
    int sum = 0;
    for (int i = 0; i < arr->length; i++)
    {
        sum += arr->A[i];
    }
    return sum;
}
int sumr(struct Array arr[], int n)
{
    int sum = 0;
    if (n < 0)
    {
        return 0;
    }
    else
    {
        return sumr(arr, n - 1) + arr->A[n];
    }
}
int avg(struct Array arr[], int n)
{
    if (n < 0)
        return 0;
    else
    {
        return sumr(arr, n) / n;
    }
}
int binarySearchrec(struct Array arr[], int l, int h, int key)
{
    if (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (key == arr->A[mid])
            return mid;
        else if (key > arr->A[mid])
            return binarySearchrec(arr, mid + 1, h, key);
        else if (key < arr->A[mid])
        {
            return binarySearchrec(arr, l, mid - 1, key);
        }
    }
    else
        return -1;
}
void reverseaux(struct Array arr[])
{
    struct Array arr2[] = {{new int[arr2->length], arr->size, arr->length}};
    for (int i = 0, j = arr->length - 1; i < arr->length, j >= 0; i++, j--)
    {
        arr2->A[i] = arr->A[j];
    }
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i] = arr2->A[i];
    }
}
void reverseswap(struct Array arr[])
{
    for (int i = 0, j = arr->length - 1; i < arr->length, j >= 0; i++, j--)
    {
        swap(arr->A[i], arr->A[j]);
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
    Insert(arr, 4, 6);
    cout << search(arr, 5) << endl;
    display(arr);
    cout << improvedLS(arr, 3) << endl;
    display(arr);
    cout << Delete(arr, 3) << endl;
    display(arr);
    cout << improvisedLS(arr, 2) << endl;
    display(arr);
    cout << binarySearch(arr, 3) << endl;
    cout << binarySearch(arr, 6) << endl;
    cout << binarySearchrec(arr, 0, arr->length - 1, 4) << endl;
    cout << get(arr, 3) << endl;
    set(arr, 2, 10);
    display(arr);
    cout << max(arr) << endl;
    cout << min(arr) << endl;
    cout << sum(arr) << endl;
    cout << sumr(arr, 5) << endl;
    cout << avg(arr, 5) << endl;
    reverseaux(arr);
    display(arr);
    reverseswap(arr);
    display(arr);

    return 0;
}