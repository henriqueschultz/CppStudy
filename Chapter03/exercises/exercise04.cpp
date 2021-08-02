#include "..\..\std_lib_facilities.h"

int main()
{
    int value1 = 0;
    int value2 = 0;


    cout << "Please enter the first value:\n";
    cout << "(press enter after)\n";

    cin >> value1;

    cout << "Please enter the second value:\n";
    cout << "(press enter after)\n";

    cin >> value2;


    cout << "Value1 == " << value1 << "\n";
    cout << "Value2 == " << value2 << "\n";

    if (value1 == value2)
    {
        cout << "The values are equal\n";
    } 
    else
    {
       if (value1 > value2)
       {
           cout << "Value1 is greater than value2\n";
       }
       else if (value2 > value1)
       {
           cout << "Value2 is greater than value1\n";
       }
    }

    cout << "The sum of value1 and value 2 is " << value1 + value2 << "\n";
    cout << "The diference of value1 and value2 is " << value1 - value2 << "\n";
    cout << "The product of value1 and value2 is " << value1 * value2 << "\n";

    if (value2 == 0)
    {
        cout << "Value2 can't be zero for ratio calculations!!\n";
    }
    else
    {
        cout << "The ratio of value1 and value2 is " << value1 / value2 << "\n";
    }
    
    
}