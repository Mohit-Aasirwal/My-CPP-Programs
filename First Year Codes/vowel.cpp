// program to determine vowel or not
#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout << "enter alphabet" << endl;
    cin >> alpha;
    switch (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' ||
            alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
    {
    case 1:
        cout << "its vowel";
        break;
    case 0:
        cout << "its not vowel";
        break;
    }
}