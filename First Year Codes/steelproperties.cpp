#include <iostream>
using namespace std;
int main()
{
    float hardness, cc, ts;
    int grade;

    cout << ("enter the hardness of steel");
    cin >> (hardness);
    cout << ("enter the carbon content of steel");
    cin >> (cc);
    cout << ("enter the tensile stress the steel can bear");
    cin >> (ts);

    if (hardness > 50 && cc < 0.7 && ts > 5600)
        grade = 10;
    else if (hardness > 50 && cc < 0.7 && !ts > 5600)
        grade = 9;
    else if (!hardness > 50 && cc < 0.7 && ts > 5600)
        grade = 8;
    else if (hardness > 50 && !cc < 0.7 && ts > 5600)
        grade = 7;
    else if (hardness > 50 || cc < 0.7 || ts > 5600)
        grade = 6;
    else
        grade = 5;

    cout << "the grade of your steel is: " << grade;

    return 0;
}