#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Използваме unsigned int, защото изминалото време в секунди е положително
    // число.
    unsigned int pastSeconds;

    cout << "Enter past seconds: ";
    cin >> pastSeconds;

    unsigned int minutes = pastSeconds / 60;
    unsigned int hours = minutes / 60;

    hours %= 24;
    minutes %= 60;

    cout.fill('0');  // Ако останат празни места от 'setw' ще бъдат запълнени с '0'
    cout << "\nThe time is " << setw(2) << hours << ":"
         << setw(2) << minutes << endl;

    return 0;
}
