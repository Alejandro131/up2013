#include <iostream>

using namespace std;

int main()
{
    // Координатите на точките на първия триъгълник.
    double point1X, point1Y, point2X, point2Y, point3X, point3Y;

    cout << "Enter the coordinates of the first point of the first triangle: ";
    cin >> point1X >> point1Y;
    cout << "Enter the coordinates of the second point of the first triangle: ";
    cin >> point2X >> point2Y;
    cout << "Enter the coordinates of the third point of the first triangle: ";
    cin >> point3X >> point3Y;

    // Координатите на точките на втория триъгълник.
    double point4X, point4Y, point5X, point5Y, point6X, point6Y;

    cout << "Enter the coordinates of the first point of the second triangle: ";
    cin >> point4X >> point4Y;
    cout << "Enter the coordinates of the second point of the second triangle: ";
    cin >> point5X >> point5Y;
    cout << "Enter the coordinates of the third point of the second triangle: ";
    cin >> point6X >> point6Y;

    // Смятаме дължините на страните. Защо няма sqrt? Да, така не получаваме
    // дължините на страните, а техните дължини на квадрат. От sqrt няма смисъл,
    // защото ако триъгълниците са еднакви, то техните страни ще са с равни
    // дължини. Следователно дължините на квадрат пак ще са равни.

    double triangle1Side1 = (point1X - point2X)*(point1X - point2X) +
                            (point1Y - point2Y)*(point1Y - point2Y);

    double triangle1Side2 = (point1X - point3X)*(point1X - point3X) +
                            (point1Y - point3Y)*(point1Y - point3Y);

    double triangle1Side3 = (point2X - point3X)*(point2X - point3X) +
                            (point2Y - point3Y)*(point2Y - point3Y);

    double triangle2Side1 = (point4X - point5X)*(point4X - point5X) +
                            (point4Y - point5Y)*(point4Y - point5Y);

    double triangle2Side2 = (point4X - point6X)*(point4X - point6X) +
                            (point4Y - point6Y)*(point4Y - point6Y);

    double triangle2Side3 = (point5X - point6X)*(point5X - point6X) +
                            (point5Y - point6Y)*(point5Y - point6Y);

    double triangle1Min, triangle1Middle, triangle1Max;

    // По този начин може да решите(почти) задачата от домашното.
    // Намираме най-късата, средната по дължина и най-дългата страна.
    // Не се плашете от 'swap', тя просто разменя стойностите. Тоест
    // използвайте я, ако ви мързи да до правите с помощна променлива.

    triangle1Min = triangle1Side1;
    triangle1Middle = triangle1Side2;
    triangle1Max = triangle1Side3;

    if (triangle1Min > triangle1Middle)
    {
        swap(triangle1Min, triangle1Middle);
    }

    if (triangle1Min > triangle1Max)
    {
        swap(triangle1Min, triangle1Max);
    }

    if (triangle1Max < triangle1Middle)
    {
        swap(triangle1Max, triangle1Middle);
    }

    // Същото за страните на втория триъгълник.
    double triangle2Min, triangle2Middle, triangle2Max;

    triangle2Min = triangle2Side1;
    triangle2Middle = triangle2Side2;
    triangle2Max = triangle2Side3;

    if (triangle2Min > triangle2Middle)
    {
        swap(triangle2Min, triangle2Middle);
    }

    if (triangle2Min > triangle2Max)
    {
        swap(triangle2Min, triangle2Max);
    }

    if (triangle2Max < triangle2Middle)
    {
        swap(triangle2Max, triangle2Middle);
    }

    cout << boolalpha << (triangle1Min == triangle2Min &&
                          triangle1Middle == triangle2Middle &&
                          triangle1Max == triangle2Max) << endl;

    return 0;
}
