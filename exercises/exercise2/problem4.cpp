#include <iostream>

using namespace std;

int int main()
{
    int threeDigitNumber;

    cout << "Enter a 3-digit integer: ";
    cin >> threeDigitNumber;

    // Ако не направим това и въведеното число е -720, то стотиците ще са
    // -120 / 100, което е -7 != 7. В този случай ще получим грешен отговор.
    // Другият вариант е, при пресмятане на цифрите, да вземаме абсолютната им
    // стойност.
    threeDigitNumber = abs(threeDigitNumber);

    int units = threeDigitNumber % 10;
    int thousands = threeDigitNumber / 10 % 10;
    int hundreds = threeDigitNumber / 100;

    // 'boolalpha' е манипулатор, който извежда на екрана 'true' или 'false'
    // вместо '1' или '0', когато cout-ваме булева променлива или израз.
    cout << boolalpha << ((units == 7) || (thousands == 7) || (hundreds == 7))
         << endl;

    return 0;
}
