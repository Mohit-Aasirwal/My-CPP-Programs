#include <iostream>
using namespace std;
int main()
{
    int cp, sp, profit, loss;
    cout << ("enter the cost price of product: ");
    cin >> (cp);
    cout << ("enter the selling price of product: ");
    cin >> (sp);

    if (sp >= cp)
        cout << "the product has a profit of: " << sp - cp;

    else
        cout << "the product has a loss of:" << cp - sp;

    return 0;
}