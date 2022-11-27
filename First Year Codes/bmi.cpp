#include <iostream>
using namespace std;
int main()
{
    float height, weight;
    float bmi;

    cout << ("enter the height(in metres) and weight(in kilograms) of the person:");
    cin >> height >> weight;

    bmi = weight / (height * height);

    if (bmi < 15)
        cout << ("the person is suffering from starvation");

    else if (bmi >= 15.1 && bmi <= 17.5)
        cout << ("the person is anorexic");

    else if (bmi >= 17.6 && bmi <= 18.5)
        cout << ("the person is underweight");

    else if (bmi >= 18.6 && bmi <= 24.9)
        cout << ("the person is ideal in weight");

    else if (bmi >= 25 && bmi <= 25.9)
        cout << ("the person is overweight");

    else if (bmi >= 30 && bmi <= 30.9)
        cout << ("the person is obese");

    else if (bmi >= 40)
        cout << ("the person is morbidly obese");

    return 0;
}