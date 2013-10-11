#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int intUpperBound = (int)pow(2.0, 31) - 1;  // горната граница на 'int'
    intUpperBound = intUpperBound + 1;  // надхвърляме горната граница и се връщаме
                                        // в началото на областта
    cout << intUpperBound << endl;

    int intLowerBound = (int)-pow(2.0, 31);  // долната граница на 'int'
    intLowerBound = intLowerBound - 1;  // подминаваме долната граница и се връщаме
                                        // в края на областта
    cout << intLowerBound << endl;

    intLowerBound = (int)-pow(2.0, 31);
    intUpperBound = abs(intLowerBound);  // абсолютната стойност на долната граница
                                         // е 2^31, но това надхвърля горната граница,
                                         // следователно се връщаме в началото
    cout << intUpperBound << endl;

    return 0;
}
