#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter an integer value for 'n': ";
    cin >> n;

    long long doubleFactorial = 1;

    // Тъй като (2n)!! = 2.4.6...2n, i трябва да започне от 2 и да се увеличава
    // до 2n, като приема само четни стойности, тоест стъпката ще е 2(i += 2,
    // което е същото като i = i + 2).
    for (int i = 2; i <= 2*n; i+=2)
    {
        doubleFactorial *= i;
    }

    cout << "Double factorial of " << n << " is: " << doubleFactorial << endl;

    return 0;
}
