#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cout << "Enter an integer value for 'n': ";
    cin >> n;

    double x;

    cout << "Enter a real number value for 'x': ";
    cin >> x;

    double sum = 0;

    for (int i = 1; i <= n; i++)
    {
        // Ако 'sum' беше 'int', а не 'double': sin(x) връща 'double',
        // pow(sin(x), i), връща 'double', тоест резултатът от дясната страна
        // е 'double', но 'sum' е 'int' и тогава резултатът трябва да се
        // превърне в 'int', което означава да се закръгли надолу. Следователно
        // за всяко 'x' различно от pi/2 и 3/2*pi ще получаваме сума равна на 0.
        sum += pow(sin(x), i);
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
