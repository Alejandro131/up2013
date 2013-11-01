#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter an integer value for 'n: ";
    cin >> n;

    // Ще сумираме реални числа, следователно и сумата трябва да е реално число.
    double sum = 0;

    // Това ще ни е единицата, която ще делим на i, заедно със знака. По-надолу
    // е обяснено, защо е от тип 'double'.
    double sign = 1;

    for (int i = 1; i <= n; i++)
    {
        // Ако 'sign' беше 'int', sign/i щеше да е цяло число и по-точно 0,
        // защото 'sign' e -1 или 1, а i >= 1 и следователно sign/i ще се
        // закръгли надолу към 0.
        sum += sign/i;

        // Сменяме знака. Ако е бил -1 става 1 и обратно.
        sign = -sign;
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
