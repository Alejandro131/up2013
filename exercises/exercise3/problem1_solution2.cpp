#include <iostream>

using namespace std;

int main()
{
    double pointX, pointY;

    cout << "Enter the coordinates of the points: ";
    cin >> pointX >> pointY;

    // Това включва контура на големия квадрат, защото той е оцветен в черно.
    bool inBigSquare = (pointX >= -2 && pointX <= 2 &&
                        pointY >= -2 && pointY <= 2);

    // Това включва контура от правата x=0, но не включва контура на дъгата.
    bool outOfSemicircle = (pointX*pointX + pointY*pointY > 4 ||
                            x >= 0);

    // Това не включва контура на малкия квадрат.
    bool outOfSmallSquare = (pointX < 0 || pointX > 1 ||
                             pointY < 0 || pointY > 1);


    // Директно cout-ваме стойността на булевия израз.
    cout << boolalpha << (inBigSquare && outOfSemicircle && outOfSmallSquare)
                      << endl;

    return 0;
}
