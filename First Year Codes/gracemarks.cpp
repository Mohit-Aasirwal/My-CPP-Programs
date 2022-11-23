#include <iostream>
using namespace std;
int main()
{
    int sub, cls;

    cout << ("enter the class of student i.e. 1 ,2 or 3\n");
    cin >> (cls);
    cout << ("enter the number of subjects he has failed in:\n");
    cin >> (sub);
    switch (cls)

    {
    case 1:
        if (sub > 3)
            cout << ("no grace\n");
        else
            cout << ("grace of 5 marks per subject\n");
        break;

    case 2:
        if (sub > 2)
            cout << ("no grace\n");
        else
            cout << ("grace of 4 marks per subject\n");
        break;

    case 3:
        if (sub > 1)
            cout << ("no grace\n");
        else
            cout << ("grace of 5 marks\n");
        break;

    default:
        cout << ("wrong class entered\n");
    }
    return 0;
}