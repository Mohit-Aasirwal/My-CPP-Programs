#include <iostream>
using namespace std;
class person // class declaration
{
    char name[30]; // data members
    int age;

public:
    void get_data(void); // member functions
    void display(void);
};
void person::get_data(void) // member function definition
{
    cout << "enter name: ";
    cin >> name;
    cout << "enter age: ";
    cin >> age;
}
void person::display(void)
{
    cout << "\n Name: " << name;
    cout << "\n Age: " << age;
}
int main()
{
    person p; // use of class

    p.get_data(); // use of methods
    p.display();

    return 0;
}