#include <iostream>

using namespace std;

// заданы два неравенства, даны коэффициенты. нужно вычислить количество целых решений

bool isNegative(int num) {return num < 0;}


int main() {
    int a,b,c,d,x1, x2;
    bool p1 = true,p2 = true;


    cout << "Enter a b c d" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    x1 = -(b/a);
    if (isNegative(b) ^ isNegative(a))
        x1 *= -1, p1 = false;

    x2 = -(d/c);
    if (isNegative(c) ^ isNegative(d))
        x2 *= -1, p2 = false;

    if ((p1c && p2))
        cout << "1!";
    if ((x1 < x2) && (!p1 && p2))
        cout << "2!";
    if ((x1 > x2) && (p1 && !p2))
        cout << "3!";
    if (!p1 && !p2)
        cout << "1!!";

    /*
     * x >= 1
     * x <= 3
     *
     * a b c d
     * + + + + inf
     * + + + - inf
     * + + - + b/a > c/d
     * + + - - b/a > c/d
     * + - + + inf
     * + - + -
     * ====
     *
     * if a < 0 -> if b/a > c/d -> ok
     *             if b/a < c/d -> no
     *
     *
     *
     *
     * x - b/a >= 0
     * x - d/c >= 0
     *
     * ------*--------*---
     *
     *
     */

    return 0;
}
