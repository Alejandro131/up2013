#include <iostream>

using namespace std;

int main()
{
    double centerX, centerY, radius;

    cout << "Enter the coordinates of the center: ";
    cin >> centerX >> centerY;

    cout << "Enter the radius: ";
    cin >> radius;

    double pointX, pointY;

    cout << "Enter the 'x' and 'y' coordinates of the point: ";
    cin >> pointX >> pointY;

    cout << boolalpha
         << ((pointX - centerX)*(pointX - centerX) + (pointY - centerY)*(pointY - centerY) <= radius*radius)
         << endl;

    return 0;
}
