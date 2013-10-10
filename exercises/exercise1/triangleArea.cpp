#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3;
	double a, b, c;  // страните
	double semiperimeter;  // полупериметъра
	double area;  // лицето

	cout << "Enter the coordinates of the first point: ";
	cin >> x1 >> y1;
	cout << "Enter the coordinates of the second point: ";
	cin >> x2 >> y2;
	cout << "Enter the coordinates of the third point: ";
	cin >> x3 >> y3;

	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	semiperimeter = (a + b + c)/2;

	area = sqrt(semiperimeter*(semiperimeter - a)*(semiperimeter - b)*
				(semiperimeter - c));

	// 0 0, 0 3, 4 0 -> 6
	// 0 0, 0.25 0.25, 0 0.25 -> 0.03125

	cout << "The area of the triangle is: " << area << endl;

	return 0;
}
