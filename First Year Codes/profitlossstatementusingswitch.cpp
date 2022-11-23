// profit loss statement using switch case.
#include <iostream>
using namespace std;
int main()
{
    int purchase, sale, profit_loss;
    cout << "Enter Your Purcahsing Price : ";
    cin >> purchase;
    cout << "Enter Your Selling Price : ";
    cin >> sale;
    switch (sale > purchase)
    {
    case 1:
        profit_loss = sale - purchase;
        cout << "You got the Profit  and your profit is: " << profit_loss;
        break;
    case 0:
        profit_loss = sale - purchase;
        cout << "You got loss and Your Loss is : " << profit_loss;
        break;
    }
}