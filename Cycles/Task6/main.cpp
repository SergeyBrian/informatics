#include <iostream>
#include <cmath>

using namespace std;


bool isXmorf(int num, int p)
{
    bool result = false;

    int length = 1;

    int div = 10;
    while (num/div > 0)
    {
        length ++;
        div *= 10;
    }
//    cout << length << endl;

    int lastDigit = int(pow(num, p)) % int(pow(10, length));

    result = (lastDigit == num);

    return result;
}

int main() {
    int min, max;

    cout << "Enter min number: ";
    cin >> min;

    cout << "Enter max number: ";
    cin >> max;

    int count = 0;
    for (int x = min; x <= max; x++)
    {
        if ((!isXmorf(x, 2)) && (isXmorf(x, 3)))
        {
            cout << "[" << x << "] " << x*x << " " << x*x*x << endl;
            count ++;
        }
    }

    cout << "There are " << count << " trimorf and not automorf numbers between " << min << " and " << max;

    return 0;
}
