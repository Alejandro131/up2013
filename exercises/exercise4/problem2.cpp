#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter an integer value for 'n': ";
    cin >> n;

    // Когато сумираме, започваме от 0. В този случай сумата ще е сбор от цели
    // числа, тоест 'sum' ще е цяло число и може да използваме 'int'.
    int sum = 0;

    // 'i' се изменя от 1 до n влючително със стъпка 1(i++ е еквивалентно на
    // i = i + 1, което е същото като i += 1).
    for (int i = 1; i <= n; i++)
    {
        // Съкратен запис на: sum = sum + i;
        sum += i;
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
