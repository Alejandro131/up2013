#include <iostream>

using namespace std;

int main()
{
    // Тук ако използваме 'unsigned int' няма да може да въвеждаме отрицателни
    // числа.
    int threeDigitNumber;

    cout << "Enter a 3-digit integer: ";
    cin >> threeDigitNumber;

    // Ако не направим това и въведеното число е -120, то стотиците ще са
    // -120 / 100, което е -1. В нашия случай това не ни пречи, но при други
    // задачи ще получим грешен отговор.
    threeDigitNumber = abs(threeDigitNumber);

    // Тук вече може да използваме 'unsigned int'.
    int units = threeDigitNumber % 10;
    int thousands = threeDigitNumber / 10 % 10;
    int hundreds = threeDigitNumber / 100;

    // Тези булеви променливи ще имат стойност 1, ако съответно единиците,
    // десетиците или стотиците са нечетни.
    bool areUnitsOdd = units % 2 != 0;
    bool areThousandsOdd = thousands % 2 != 0;
    bool areHundredsOdd = hundreds % 2 != 0;

    cout << "\nThe number of odd digits is: "
         << areUnitsOdd + areThousandsOdd + areHundredsOdd << endl;

    return 0;
}
