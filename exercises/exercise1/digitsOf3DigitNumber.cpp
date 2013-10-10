#include <iostream>

using namespace std;

int main()
{
    int number;
    int units, tens, hundreds;  // съответно 'единици', 'десетици' и 'стотици'

    cout << "Enter an integer: ";
    cin >> number;

    units = number % 10;
    tens = number / 10 % 10;
    hundreds = number / 100;

    cout << "Hundreds: " << hundreds << endl;
    cout << "Tens: " << tens << endl;
    cout << "Units: " << units << endl;

    return 0;
}
