#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter an integer value for 'n: ";
    cin >> n;

    // Ще сумираме реални числа, следователно и сумата трябва да е реално число.
    double sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += pow(-1.0, i - 1)/i;
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
