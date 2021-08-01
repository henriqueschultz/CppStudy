#include "..\..\std_lib_facilities.h"

int main()
{
    double miles = 0;
    double kilometers = 0;

    cout << "Converter miles to kilometers\n";
    cout << "Please enter the number of miles to converter:\n";
    cout << "(press enter after)\n";

    cin >> miles;

    kilometers = miles * 1.609;

    cout << miles << " miles => " << kilometers << " kilometers\n";

}