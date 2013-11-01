#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter an integer value for 'n': ";
    cin >> n;

    // Когато смятаме произведение, не започваме от 0, защото ще нулираме
    // всичко, а от 1. В случая използваме типа `long long`, защото за при
    // увеличаване на 'n' резултатът става много голям. Дори 'long long' не
    // върви работа - може да пробвате 100!.
    long long factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}
