// program to print pythagorean triplet upto 30
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    for (a = 1; a <= 30; a++)
    {
        for (b = 1; b <= 30; b++)
        {
            for (c = 1; c <= 30; c++)
            {
                if (a * a + b * b == c * c)
                    cout << "pythagorean triplet is= " << a << "   " << b << "   " << c << endl;
            }
        }
    }
    return 0;
}