#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Използваме unsigned int, защото изминалото време в секунди е положително
    // число. Тоест няма да са ни нужни отрицателни числа.

    unsigned int firstPeriodHours, firstPeriodMinutes;
    unsigned int secondPeriodHours, secondPeriodMinutes;

    cout << "First period!" << endl;
    cin >>firstPeriodHours >> firstPeriodMinutes;

    cout << "\nSecond period!" << endl;
    cin >> secondPeriodHours >> secondPeriodMinutes;

    unsigned int firstPeriodInMinutes = firstPeriodHours*60 + firstPeriodMinutes;
    unsigned int secondPeriodInMinutes = secondPeriodHours*60 + secondPeriodMinutes;
    unsigned int bothPeriodsInMinutes = firstPeriodInMinutes + secondPeriodInMinutes;

    unsigned int currentMinutes = bothPeriodsInMinutes % 60;
    unsigned int currentHours = bothPeriodsInMinutes / 60 % 24;

    cout.fill('0');  // Ако останат празни места от 'setw' ще бъдат запълнени с '0'.
    cout << "\nThe current time is " << setw(2) << currentHours << ':'
         << setw(2) << currentMinutes << endl;

    return 0;
}
