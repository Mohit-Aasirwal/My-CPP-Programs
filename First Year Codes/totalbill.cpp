#include <iostream>
using namespace std;
int main()
{
    int qty, dis = 0;
    float rate, tot;

    cout << ("enter the quantity and rates of the product: ");
    cin >> qty >> rate;

    if (qty > 1000)
        dis = 10;

    tot = (qty * rate) - (qty * rate * dis / 100);
    cout << "the total bill is : " << tot;
    return 0;
}