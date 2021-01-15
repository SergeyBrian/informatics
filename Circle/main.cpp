#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double Sx, Sy, R, x, y;
    bool ox = false;
    bool oy = false;


    cout << "Enter circle radius:";
    cin >> R;

    cout << "Enter circle center x coordinate:";
    cin >> Sx;

    cout << "Enter circle center y coordinate:";
    cin >> Sy;

    cout << "Enter point x coordinate:";
    cin >> x;

    cout << "Enter point y coordinate:";
    cin >> y;

    // Check x:
    if (((Sx + R > abs(x))) &&
        ((Sy + R > abs(y))))
        cout << "Point is in circle!";
    else if (((Sx + R == abs(x))) &&
             ((Sy + R == abs(y))))
        cout << "Point is on circle!";
    else
        cout << "Point is not in circle!";

    return 0;
}
