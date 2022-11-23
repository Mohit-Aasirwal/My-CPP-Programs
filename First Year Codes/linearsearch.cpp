//this program searches for element in the array one by one....
//its time complexity is O(n)...
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array:" << endl;
    cin >> n;
    int x[n];
    cout << "enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int element;
    cout << "enter the element to be searched:" << endl;
    cin >> element;
    bool search = false;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == element)
        {
            search = true;
            break;
        }
    }
    if (search)
        cout << "found\n";
    else
        cout << "not found\n";
    return 0;
}