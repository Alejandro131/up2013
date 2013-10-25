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

    // Предимството на използването на if вместо директно да cout-ваме булевия
    // израз е, че тук можем да извеждаме на екрана и друго, по-информативно
    // съобщение, от 'true' и 'false'.

    if (inBigSquare && outOfSemicircle && outOfSmallSquare)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
