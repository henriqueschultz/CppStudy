#include "..\..\std_lib_facilities.h"

int main()
{
    cout << "Please enter a value: ";
    int n;
    cin >> n;
    cout << "n == " << n;
    cout << "\nn+1 == " << n + 1;
    cout << "\nthree times n == " << 3 * n;
    cout << "\ntwice n == " << n + n;
    cout << "\nn squared == " << n * n;
    cout << "\nhalf of n == " << n / 2;
    cout << "\nremainder(modulo) of n/2 ==" << n % 2;
    double d_n = n;

    cout << "\nsquare root of n == " << sqrt(d_n);
    cout << '\n'; 
}