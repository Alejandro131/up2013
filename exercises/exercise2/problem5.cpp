#include <iostream>

using namespace std;

int main()
{
    double pointX, pointY;

    cout << "Enter the 'x' and 'y' coordinates of the point: ";
    cin >> pointX >> pointY;

    // Уравненията на страните на този правоъгълник са: y=1, y=3, x=1, x=5.
    cout << boolalpha << (pointX >= 1 && pointX <= 5 && pointY >= 1 && pointY <= 3)
         << endl;

    return 0;
}
