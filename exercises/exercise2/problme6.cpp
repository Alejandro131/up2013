#include <iostream>

using namespace std;

int main()
{
    double radius;

    cout << "Enter the radius: ";
    cin >> radius;

    double pointX, pointY;

    cout << "Enter the 'x' and 'y' coordinates of the point: ";
    cin >> pointX >> pointY;

    // Уравнението на окръжността е:
    // (x - ox)*(x - ox) + (y - oy)*(y - oy) = radius*radius, където (ox, oy)
    // е центърът на окръжността, който в момента е (0, 0). Следователно
    // уравнението придобива вида: x*x + y*y = radius*radius. Ако искаме
    // точката да е вътре - <, на контура - =, отвън - >.
    cout << boolalpha << (pointX*pointX + pointY*pointY <= radius*radius)
         << endl;

    return 0;
}
