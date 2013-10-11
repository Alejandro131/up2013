#include <iostream>

using namespace std;

int main()
{
    int a, b;  // числата

    cout << "Enter an integer value for 'a': ";
    cin >> a;

    cout << "Enter an integer value for 'b': ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << endl << "Now a=" << a << " and b=" << b << '!' << endl;

    return 0;
}
