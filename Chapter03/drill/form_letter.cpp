#include "..\..\std_lib_facilities.h"

int main()
{
    string first_name;
    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
    cin >> first_name;

    cout << "Dear " << first_name << "\n";
    cout << "\tHow are you? I am fine. I miss you.\n";
    cout << "Bla, bla, bla, bla, bla, Bla, bla, bla, bla, bla\n";
    cout << "Bla, bla, bla, bla, bla, Bla, bla, bla, bla, bla\n";
    cout << "Bla, bla, bla, bla, bla, Bla, bla, bla, bla, bla\n";
    cout << "Bla, bla, bla, bla, bla, Bla, bla, bla, bla, bla\n";

    string friend_name;
    cout << "Enter the name of another friend of you (followed by 'enter'):\n";
    cin >> friend_name;

    cout << "Have you seen " << friend_name << " lately?\n";

    char friend_sex = 0;
    cout << "Enter 'm'  if the friend is male and an 'f' if the friend is female (followed by 'enter'):\n";
    cin >> friend_sex;

    
    if (friend_sex == 'm')
    {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    }

    if (friend_sex == 'f')
    {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }

    int age;
    cout << "Enter the age of the recipient (followed by 'enter'):\n";
    cin >> age;

    if (age <= 0 || age >= 110)
    {
        simple_error("you're kidding!");
    }

    if (age < 12)
    {
        cout << "Next year you will be " << (age + 1) << "\n";
    }

    if (age == 17)
    {
        cout << "Next year you will be able to vote.\n";
    }

    if (age > 70)
    {
        cout << "I hope you are enjoying retirement.\n";
    }

    cout << "Yours sincerely,\n"
         << "\n\n"
         << "Henrique" 
         << "\n";

    keep_window_open();
    return 0;
}