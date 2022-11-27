// program to check entered character is alphabet or not.
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character?" << endl;
    cin >> c;
    switch ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
    case 0:
        cout << c << " is not an Alphabet." << endl;
        break;
    case 1:
        cout << c << " is an Alphabet." << endl;
        break;
    default:
        cout << "Invalid input " << endl;
    }
}