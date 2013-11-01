#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter an integer value for 'n': ";
    cin >> n;

    int sum = 0;

    // Отново 'i' се изменя от '1' до 'n', но този път със стъпка 2.
    for (int i = 1; i <= n; i += 2)
    {
        sum += i;
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
