// calculation of salary for employee
#include <iostream>
using namespace std;
int main()
{
    int yos, q, sal = 0;
    char g;
    cout << ("enter the gender('m','f'): ") << endl;
    cin >> (g);
    cout << ("enter the year of service of employee") << endl;
    cin >> (yos);
    cout << ("enter the qualification(1 for post graduation nd 0 for graduation only)") << endl;
    cin >> (q);
    if (g == 'm' && yos >= 10 && q == 1)
        sal = 15000;
    else if ((g == 'm' && yos >= 10 && q == 0) || (g == 'm' && yos < 10 && q == 1))
        sal = 10000;
    else if (g == 'm' && yos < 10 && q == 0)
        sal = 7000;
    else if (g == 'f' && yos >= 10 && q == 1)
        sal = 12000;
    else if (g == 'f' && yos < 10 && q == 1)
        sal = 10000;
    else if (g == 'f' && yos >= 10 && q == 0)
        sal = 9000;
    else if (g == 'f' && yos < 10 && q == 0)
        sal = 6000;

    cout << "the salary of the employee is: " << sal;

    return 0;
}