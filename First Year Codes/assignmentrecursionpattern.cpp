// C++ code to demonstrate printing pattern of numbers

#include <iostream>
using namespace std;

// function to print a row
void print_row(int no, int val)
{
    // base case
    if (no == 0)
        return;
    for (int i = 0; i <= val - no; i++)
        cout << val << " ";

    // recursively calling print_row()
    print_row((no - 1), val);
}

// function to print the pattern
void pattern(int n, int num)
{
    // base case
    if (n == 0)
        return;
    print_row(num - n + 1, num - n + 1);
    cout << endl;

    // recursively calling pattern()
    pattern(n - 1, num);
}
int main()
{
    int n = 4;
    pattern(n, n);
}
