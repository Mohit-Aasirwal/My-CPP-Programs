#include <iostream>
using namespace std;
int main()
{
    int ID = 300;
    int password = 1000;
    cout << "Enter Your ID: " << endl;
    scanf("%d", &ID);
    switch (ID)
    {
    case 300:
        cout << "Enter your password:\n " << endl;
        scanf("%d", &password);
        switch (password)
        {
        case 1000:
            cout << "Welcome to the portal" << endl;
            break;
        default:
            cout << "Enter correct password" << endl;
            break;
        }
        break;
    default:
        cout << "Enter correct ID" << endl;
        break;
    }
}