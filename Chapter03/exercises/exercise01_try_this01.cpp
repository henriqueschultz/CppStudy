#include "..\..\std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name:\n";
    string first_name = "???";    
    cin >> first_name;

    cout << "Please enter your age:\n";
    double age = 0;
    cin >> age;

    age = age * 12;

    cout << "Hello, " << first_name << " (age in months " << age << ")\n";
}